#ifndef STACKEMPTYEXCEPTION_H
#define STACKEMPTYEXCEPTION_H
#include "StackException.h"

class StackEmptyException: public StackException{
    private:

    public:
    std::string GetMessage() const{
        return "Stack Empty!";
    }
};

#endif