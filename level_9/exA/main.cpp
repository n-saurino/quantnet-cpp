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

    Batch1 b1;
    Batch* b = &b1;    

    EuropeanOption option_b1(b, BlackScholesStockOption);

    cout << option_b1.ToString() << endl;
    cout << option_b1.Price(option_b1.GetS()) << endl;
    cout << "Price difference: " << option_b1.Price(option_b1.GetS()) - b->GetC() << endl;

    option_b1.Toggle();

    cout << option_b1.ToString() << endl;
    cout << option_b1.Price(option_b1.GetS()) << endl;
    cout << "Price difference: " << option_b1.Price(option_b1.GetS()) - b->GetP() << endl;


}
