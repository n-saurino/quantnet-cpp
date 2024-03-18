#pragma once
#include <vector>
#include "EuropeanOption.hpp"

using namespace std;

// make the MatrixPricer a template that takes the 

template<typename T>
class MatrixPricer
{
private:
    /* data */
    vector<vector<double>> params_;
    T option_;

public:
    MatrixPricer(const vector<vector<double>>& params);
    ~MatrixPricer();

    // type: call or put
    vector<double> Price(string type);
};

template<typename T>
MatrixPricer<T>::MatrixPricer(const vector<vector<double>>& params): params_(params)
{
}

template<typename T>
MatrixPricer<T>::~MatrixPricer()
{
}

template<typename T>
vector<double> MatrixPricer<T>::Price(string type){
    double t; // Expiry time in years
    double sig; // Volatility
    double r; // Risk-free interest rate
    double k; // Strike price
    double b; // Cost of carry
    double s; // Stock price
    double q; // dividend yield
    double R; // foreign risk-free interest rate
    vector<double> prices;
    option_.SetOptionType(type);
    
    for(int i = 0; i < (params_[0]).size(); ++i){
        t = params_[0][i];
        sig = params_[1][i];
        r = params_[2][i];
        k = params_[3][i];
        s = params_[4][i];

        option_.SetT(t);
        option_.SetSig(sig);
        option_.SetR(r);
        option_.SetK(k);

        cout << "t: " << t << endl;
        cout << "sig: " << sig << endl;
        cout << "r: " << r << endl;
        cout << "k: " << k << endl;
        cout << "s: " << s << endl;
        double price = option_.Price(s);
        cout << "price: " << price << endl;
        prices.push_back(price);
    }

    return prices;
}


