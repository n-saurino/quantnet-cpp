#include <string>

class ArrayException{
    private:

    public:
    virtual std::string GetMessage() const{
        return "";
    };
};