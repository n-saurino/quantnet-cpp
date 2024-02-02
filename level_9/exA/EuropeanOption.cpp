#ifndef EUROPEANOPTION_CPP
#define EUROPEANOPTION_CPP
#include "EuropeanOption.hpp"

/* Constructors */

EuropeanOption::EuropeanOption(){
    Init();
}

EuropeanOption::EuropeanOption(const EuropeanOption& other){
    Copy(other);
}

EuropeanOption::EuropeanOption(const string option_type){
    Init();
    option_type_ = option_type;
    if(option_type_ == "c"){
        option_type_ = "C";
    }
}

EuropeanOption::~EuropeanOption(){

}

/* Member Functions */

// Private

// Initialize default values of European option
void EuropeanOption::Init(){
    // Default values
	r_ = 0.05;
	sig_ = 0.2;
	k_ = 110.0;
	t_ = 0.5;
	b_ = r_;			// Black and Scholes stock option model (1973)
	
	option_type_ = "C";		// European Call Option (this is the default type)
}

// Copy an option to current option
 EuropeanOption& EuropeanOption::Copy(const EuropeanOption& other){
    t_ = other.t_;
    sig_ = other.sig_;
    r_ = other.r_;
    b_ = other.b_;
    option_type_ = other.option_type_;
    underlying_name_ = other.underlying_name_;
    return *this;
 }

// Options calculations
double EuropeanOption::CallPrice(double u) const{
    double s_ = u;
    double d_1 = (log(s_/k_)+(b_+pow(sig_,2)/2)*t_)/(sig_*pow(t_,.5));
    double d_2 = d_1 - (sig_*pow(t_,.5));
    // C = Se^(b-r)^T * N(d_1) - Ke^-rT * N(d_2)
    double price = s_*exp((b_-r_)*t_)*N(d_1) - k_*exp(-r_*t_)*N(d_2);
    return price;
}

double EuropeanOption::PutPrice(double u) const{
    // P =  Ke^-rT * N(-d_2) - Se^(b-r)^T * N(-d_1)
    double s_ = u;
    double d_1 = (log(s_/k_)+(b_+pow(sig_,2)/2)*t_)/(sig_*pow(t_,.5));
    double d_2 = d_1 - (sig_*pow(t_,.5));
    double price = k_*exp(-r_*t_)*N(-d_2) - s_*exp((b_-r_)*t_)*N(-d_1);
    return price;
}

double EuropeanOption::CallDelta(double u) const{

}

double EuropeanOption::PutDelta(double u) const{

}

// Gaussian functions
// Normal (Gaussian) probability density function
double EuropeanOption::n(double x) const{
    double A = 1.0/sqrt(2.0 * 3.1415);
	return A * exp(-x*x*0.5);
}

// Cumulative normal (Gaussian) distribution function
double EuropeanOption::N(double x) const{
	double a1 = 0.4361836;
	double a2 = -0.1201676;
	double a3 = 0.9372980;

	double k = 1.0/(1.0 + (0.33267 * x));
	
	if (x >= 0.0)
	{
		return 1.0 - n(x)* (a1*k + (a2*k*k) + (a3*k*k*k));
	}
	else
	{
		return 1.0 - N(-x);
	}
} 

// Public
double EuropeanOption::Price(double u) const{
    if(option_type_ == "C"){
        return CallPrice(u);
    }else{
        return PutPrice(u);
    }
}

double EuropeanOption::Delta(double u) const{
    if(option_type_ == "C"){
        return CallDelta(u);
    }else{
        return PutDelta(u);
    }
}

// Function to check the Put-Call parity of an option price
bool EuropeanOption::CheckParity(const EuropeanOption& other) const{

}

/* Getters */

double EuropeanOption::GetT(){
    return t_;
}

double EuropeanOption::GetSig(){
    return sig_;
}

double EuropeanOption::GetR(){
    return r_;
}

double EuropeanOption::GetK(){
    return k_;
}

double EuropeanOption::GetB(){
    return b_;
}

string EuropeanOption::GetOptionType(){
    return option_type_;
}

string EuropeanOption::GetUnderlyingName(){
    return underlying_name_;
}

/* Setters */

void EuropeanOption::SetT(double t){
    t_ = t;
}

void EuropeanOption::SetSig(double sig){
    sig_ = sig;
}

void EuropeanOption::SetR(double r){
    r_ = r;
}

void EuropeanOption::SetK(double k){
    k_ = k;
}

void EuropeanOption::SetB(double b){
    b_ = b;
}

void EuropeanOption::SetOptionType(string option_type){
    option_type_ = option_type;
}

void EuropeanOption::SetUnderlyingName(string name){
    underlying_name_ = name;
}

/* Operator Overloading */

// Assignment Operator
EuropeanOption& EuropeanOption::operator = (const EuropeanOption other){
    return Copy(other);
}

/* Modifier Functions */

// Changes option_type between call and put
void EuropeanOption::toggle(){
    if(option_type_ == "C"){
        option_type_ = "P";
    }else{
        option_type_ = "C";
    }
} 

#endif