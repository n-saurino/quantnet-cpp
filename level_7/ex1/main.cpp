#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <string>


int main(){

    std::list<double> l;
    std::vector<double> v;
    std::map<std::string, double> m;

    // LIST OPERATIONS //

    std::cout << "LIST OPERATIONS" << std::endl;

    // populating the list data structure
    for(int i = 0; i < 10; i++){
        l.push_back(i);
    }

    // list iterator
    std::list<double>::iterator il;

    // printing using the list iterator
    for(il = l.begin(); il != l.end(); il++){
        std::cout << *il << ", ";
    }

    std::cout << std::endl;

    // printing the front and back of the list object
    std::cout << l.front() << std::endl;
    std::cout << l.back() << std::endl;



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

    std::cout << std::endl;

    // printing the front and back of the list object
    std::cout << v[0] << std::endl;
    std::cout << v.front() << std::endl;
    std::cout << v[v.size()-1] << std::endl;
    std::cout << v.back() << std::endl;

    // MAP OPERATIONS //
    m.insert({"Jan", 01});
    m.insert({"Feb", 02});
    m.insert({"Mar", 03});

    std::cout << "Feb: " << m["Feb"] << std::endl;


    return 0;
}