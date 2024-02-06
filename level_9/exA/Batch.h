#ifndef BATCH_H
#define BATCH_H
#include <string>

using namespace std;

struct Batch{
    double t_;
    double k_;
    double sig_;
    double r_;
    double s_;
    double C_;
    double P_;
    string option_type_; // Call or put option
    string underlying_name_; // Name of underlying stock

    // Constructor
    Batch(double t, double k, double sig, double r, double s, 
        string option_type, string underlying_name, double c,
        double p): t_(t), k_(k), sig_(sig), r_(r),
                s_(s), option_type_(option_type),
                underlying_name_(underlying_name),
                C_(c), P_(p){

        }

    // Getters
    virtual double GetT() = 0;
    virtual double GetK() = 0;
    virtual double GetSig() = 0;
    virtual double GetR() = 0;
    virtual double GetS() = 0;
    virtual string GetOptionType() = 0;
    virtual string GetUnderlyingName() = 0;
    virtual double GetC() = 0;
    virtual double GetP() = 0;

};


struct Batch1 : Batch{
    /* data */

    Batch1(): Batch(0.25,65,.3,.08,60,"C","Batch1", 2.13337, 5.84628){
        
    }

    // Getters
    double GetT(){
        return t_;
    }

    double GetK(){
        return k_;
    }

    double GetSig(){
        return sig_;
    }

    double GetR(){
        return r_;
    }

    double GetS(){
        return s_;
    }

    string GetOptionType(){
        return option_type_;
    }

    string GetUnderlyingName(){
        return underlying_name_;
    }

    double GetC(){
        return C_;
    }

    double GetP(){
        return P_;
    }

};

struct Batch2: Batch{
    /* data */

    // Constructor
    Batch2(): Batch(1,100,.2,0,100,"C","Batch2",7.96557,7.96557){
        
    }

    // Getters
    double GetT(){
        return t_;
    }

    double GetK(){
        return k_;
    }

    double GetSig(){
        return sig_;
    }

    double GetR(){
        return r_;
    }

    double GetS(){
        return s_;
    }

    string GetOptionType(){
        return option_type_;
    }

    string GetUnderlyingName(){
        return underlying_name_;
    }

    double GetC(){
        return C_;
    }

    double GetP(){
        return P_;
    }
};

struct Batch3: Batch{
    /* data */    

    // Constructor
    Batch3():Batch(1,10,.2,.12,5,"C","Batch3", 0.204058,4.07326){
        
    }

    // Getters
    double GetT(){
        return t_;
    }

    double GetK(){
        return k_;
    }

    double GetSig(){
        return sig_;
    }

    double GetR(){
        return r_;
    }

    double GetS(){
        return s_;
    }

    string GetOptionType(){
        return option_type_;
    }

    string GetUnderlyingName(){
        return underlying_name_;
    }

    double GetC(){
        return C_;
    }

    double GetP(){
        return P_;
    }
};

struct Batch4: Batch{
    /* data */

    // Constructor
    Batch4():Batch(30,100,.3,.08,100,"C","Batch4",92.17570,1.24750){
        
    }

    // Getters
    double GetT(){
        return t_;
    }

    double GetK(){
        return k_;
    }

    double GetSig(){
        return sig_;
    }

    double GetR(){
        return r_;
    }

    double GetS(){
        return s_;
    }

    string GetOptionType(){
        return option_type_;
    }

    string GetUnderlyingName(){
        return underlying_name_;
    }

    double GetC(){
        return C_;
    }

    double GetP(){
        return P_;
    }
};
#endif