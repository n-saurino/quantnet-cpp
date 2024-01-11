#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <string>

/*
    Not sure I understand this exercise??

    Using iterators you can iterate a STL container without knowing which container it is. 
    In this exercise you create a function that calculates the sum of a container with 
    doubles.
    • Create a template function called Sum() that accepts the template argument T as input 
    and returns a double. The template argument will be a container.
    • In the implementation get an iterator (T::const_iterator) for the end. Then create a 
    loop that iterates the container T and adds all values. Finally return the sum.
    • In the main program, call the Sum() function for the different container from the 
    previous exercise.

    The Sum() function created calculates the sum of the complete container. 
    Also create a Sum() function that calculates the sum between two iterators. 
    The function then uses the template argument for the iterator type and accepts two 
    iterators, the start and end iterator.

*/

// T will be a STL container in our exercise
template<typename T>
double Sum(T t){
    typename T::const_iterator cit;
    cit = t.end();
    double sum = 0;

    for(typename T::iterator it = t.begin(); it != cit; it++){
        sum += *it;
    }

    return sum;
}

// T will be a STL container iterator in our exercise
template<typename T>
double Sum(T start, T end){
    double sum = 0;

    for(T it = start; it != end; it++){
        sum += *it;
    }

    return sum;
}

// SUM FUNCTION FOR MAPS//
// typename M::mapped_type is the type of the values in the <key, value> pairs
// of the map

// typename M::key_type is the type of the keys in the <key, value> pairs
// of the map
template<typename M>
typename M::mapped_type sumValues(const M& m) {
    typename M::mapped_type sum = 0;
    for (const auto& pair : m) {
        sum += pair.second;
    }
    return sum;
}

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

    std::cout << "Sum of l: " << Sum(l) << std::endl;

    std::list<double>::iterator start = l.begin();
    start++;
    start++;

    std::list<double>::iterator end = l.end();
    end--;
    end--;

    std::cout << "Sum of l between index 2 and 7: " << Sum(start, end) << std::endl;

    
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

    std::cout << "Sum of v: " << Sum(v) << std::endl;

    std::vector<double>::iterator start_v = v.begin();
    start_v++;
    start_v++;

    std::vector<double>::iterator end_v = v.end();
    end_v--;
    end_v--;

    std::cout << "Sum of v between index 2 and 7: " << Sum(start_v, end_v) << std::endl;

    // MAP OPERATIONS //
    m.insert({"Jan", 01});
    m.insert({"Feb", 02});
    m.insert({"Mar", 03});

    std::cout << "Feb: " << m["Feb"] << std::endl;

    auto sum = sumValues(m);

    std::cout << "Sum of m: " << sum << std::endl;

    return 0;
}