// EuropeanOption.hpp
//
// Class that represents  solutions to European options. This is
// an implementation using basic C++ syntax only.
//
// (C) Datasim Component Technology BV 2003-2011
//

#ifndef EUROPEANOPTION_HPP
#define EUROPEANOPTION_HPP
#include <string>

using namespace std;

class EuropeanOption{
private:
    // Member variables
    double t_; // Expiry time in years
    double sig_; // Volatility
    double r_; // Risk-free interest rate
    double k_; // Strike price
    double b_; // Cost of carry
    string option_type_; // Call or put option
    string underlying_name_; // Name of underlying stock
    

    void Init(); // Initializes values on European option
    EuropeanOption& Copy(const EuropeanOption& other); // Copy an option to current option

    // Options calculations
    double CallPrice(double u) const;
    double PutPrice(double u) const;
    double CallDelta(double u) const;
    double PutDelta(double u) const;

    // Gaussian functions
    double n(double x) const; // Normal (Gaussian) probability density function
    double N(double x) const; // Cumulative normal (Gaussian) distribution function

public:
    EuropeanOption();
    EuropeanOption(const EuropeanOption& other);
    EuropeanOption(const string option_type);
    virtual ~EuropeanOption();
    double Price(double u) const;
    double Delta(double u) const;
    bool CheckParity(const EuropeanOption& other) const;
    // Getters
    double GetT();
    double GetSig();
    double GetR();
    double GetK();
    double GetB();
    string GetOptionType();
    string GetUnderlyingName();

    // Setters
    void SetT(double t);
    void SetSig(double sig);
    void SetR(double r);
    void SetK(double k);
    void SetB(double b);
    void SetOptionType(string option_type);
    void SetUnderlyingName(string name);

    // Operator overloading
    EuropeanOption& operator = (const EuropeanOption other);

    // Modifier functions
    void toggle(); // Changes option_type between call and put

};

#endif