#ifndef STACKFULLEXCEPTION_H
#define STACKFULLEXCEPTION_H
#include "StackException.h"

class StackFullException: public StackException{
    private:

    public:
    std::string GetMessage() const{
        return "Stack Full!";
    }
};

#endif