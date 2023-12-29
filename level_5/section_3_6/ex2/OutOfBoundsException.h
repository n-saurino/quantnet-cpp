#include "ArrayException.h"

class OutOfBoundsException: public ArrayException {
    private:
    int m_error;

    public:
    OutOfBoundsException(int idx){
        this->m_error = idx;
    }
    std::string GetMessage() const{
        std::stringstream ss;
        std::string s; 
        ss << "Array Index Out Of Bounds At Index: " << this->m_error << "\n";
        s = ss.str();
        return s;
    }

};