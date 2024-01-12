#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <string>

/*
    STL Algorithms
*/

class CompareToVal{
    private:
    int comparator;

    public:
    CompareToVal(const int val_to_compare): comparator(val_to_compare){}
    bool operator()(const int i){
        return i < comparator;
    }
};


int main(){

    std::vector<double> v;

    // VECTOR OPERATIONS //
    
    std::cout << "VECTOR OPERATIONS" << std::endl;

    v.reserve(3);
    
    // list iterator
    std::vector<double>::iterator iv;

    // populating the vector data structure
    for(int i = 0; i < 10; i++){
        v.push_back(i+10);
    }

    // printing using the list iterator
    for(iv = v.begin(); iv != v.end(); iv++){
        std::cout << *iv << ", ";
    }

    // set the comparator at 15
    CompareToVal comp(15);

    int count_15 = std::count_if(v.begin(), v.end(), comp);

    std::cout << std::endl;

    std::cout << "There are " << count_15 << " elements less than 15 in vector v";

    std::cout << std::endl;

    return 0;
}