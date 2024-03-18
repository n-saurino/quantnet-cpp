#include <iostream>
#include "Batch.h"
#include "EuropeanOption.hpp"
#include "Model_Name.h"
#include "MatrixPricer.h"



vector<double> CreateMesh(double start, double end, double h){
    vector<double> mesh;
    for(double i = start; i <= end; i+=h){
		mesh.push_back(i);
	}
    return mesh;
}

// Function to create a matrix of mesh vectors
std::vector<std::vector<double>> CreateMeshMatrix(
    const std::vector<std::tuple<double, double, double>>& params) {
    std::vector<std::vector<double>> matrix;

    for (const auto& param : params) {
        double start, end, h;
        std::tie(start, end, h) = param; // Unpack the tuple
        std::vector<double> mesh = CreateMesh(start, end, h);
        matrix.push_back(mesh);
    }

    return matrix;
}

int main(int, char**){

    cout << "PART A.a" << endl;

    Batch1 b1;
    Batch* b = &b1;    

    EuropeanOption option(b, BlackScholesStockOption);

    cout << option.ToString() << endl;
    cout << option.Price(option.GetS()) << endl;
    cout << "Price difference: " << option.Price(option.GetS()) - b->GetC() << endl;

    option.Toggle();

    cout << option.ToString() << endl;
    cout << option.Price(option.GetS()) << endl;
    cout << "Price difference: " << option.Price(option.GetS()) - b->GetP() << endl;

    cout << endl;
    cout << "-----------------------\n";
    cout << endl;

    cout << "PART A.b" << endl;

    cout << "Parity Check: " << option.CheckParity() << endl;

    cout << "Call price based on parity: " << option.CalculateParity() << endl;

    cout << endl;
    cout << "-----------------------\n";
    cout << endl;

    cout << "PART A.c" << endl;

    vector<double> mesh = CreateMesh(10, 50, 1);

    vector<double> price_vector = option.PriceVector(mesh);

    cout << "Prices for mesh: ";
    for(double price : price_vector){
        cout << price << ", ";
    }
    cout << endl;


    cout << "PART A.d" << endl;

    std::vector<std::tuple<double, double, double>> params = {
        {0, 1, 0.02},  // t: Time to expiration, from now to one year, with a step size to produce 51 elements
        {0.1, 0.5, 0.008},  // sig: Volatility, from 10% to 50%, with the adjusted step size
        {0.005, 0.05, 0.0009},  // r: Risk-free interest rate, from 0.5% to 5%, with the adjusted step size
        {80, 120, 0.8},  // k: Strike price, range with the adjusted step size
        {90, 110, 0.4}   // s: Underlying asset price, range with the adjusted step size
    };

    auto mesh_matrix = CreateMeshMatrix(params);

    MatrixPricer<EuropeanOption> mp(mesh_matrix);

    cout << "Prices for mesh matrix: " << endl;
    vector<double> prices = mp.Price("C");

    for(double price : prices){
        cout << "price: " << price << endl;
    }

    cout << endl;

}
