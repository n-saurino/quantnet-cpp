#include <iostream>
#include "Batch.h"
#include "EuropeanOption.hpp"
#include "Model_Name.h"

vector<double>* PriceVector(double start, double end, double h, const EuropeanOption& other){
	vector<double>* mesh = new vector<double>;
	for(double i = start; i <= end; i+=h){
		mesh->push_back(other.Price(i));
	}
	return mesh;
}

int main(int, char**){

    std::cout << "Hello, from EXA!\n";

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

    vector<double>* price_vector = PriceVector(10, 50, 1, option);

    cout << "Prices for mesh: ";
    for(double price : *price_vector){
        cout << price << ", ";
    }
    cout << endl;

    delete price_vector;
    price_vector = nullptr;

}
