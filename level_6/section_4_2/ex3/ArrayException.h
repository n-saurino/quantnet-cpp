#ifndef ARRAYEXCEPTION_H
#define ARRAYEXCEPTION_H
#include <string>

class ArrayException{
    private:

    public:
    virtual std::string GetMessage() const{
        return "";
    };
};

#endif