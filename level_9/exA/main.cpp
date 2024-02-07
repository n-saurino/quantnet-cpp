#include <iostream>
#include "Batch.h"
#include "EuropeanOption.hpp"
#include "Model_Name.h"

int main(int, char**){

    /*
    T (expiry time/maturity): T=1 means one year
    K (strike price)
    sig (volatility)
    r (risk-free interest rate)
    S (current stock price where we wish to price the option)
    C (call option price)
    P (puth option price)
    */

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

}
