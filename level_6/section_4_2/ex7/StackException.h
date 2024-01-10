#ifndef STACKEXCEPTION_H
#define STACKEXCEPTION_H
#include <string>

class StackException{
    private:

    public:
    std::string GetMessage() const{
        return "Stack Exception Caught!";
    }
};
#endif