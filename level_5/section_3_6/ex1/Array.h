#include "Point.h"

class Array{
    private:
        Saurino::CAD::Point* m_data;
        int m_size;
    public:
        Array();
        Array(int size);
        Array(const Array &source);
        ~Array();
        void SetElement(int idx, Saurino::CAD::Point &src);
        Saurino::CAD::Point& GetElement(int idx) const;
        int Size() const;

        // Member operator overloading
        Array& operator = (const Array& source);// operator overloading
        Saurino::CAD::Point& operator [] (int index);
        const Saurino::CAD::Point& operator [] (int index) const;
};