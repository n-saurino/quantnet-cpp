#include <iostream>
#include "Stack.cpp"


using namespace std;

int main(){

    /*
    Testing the Stack 
    Using another class as data member is called composition. 
    In this case the Stack class uses internally an Array class. 
    Forwarding functionality to another class is called delegation. 
    Here the Stack class delegates the storage of elements to the Array class.
    */

    Stack<Saurino::CAD::Point> stack;

    try
    {
        for(int i = 0; i < stack.GetArray().Size(); i++){
            stack.Push(Saurino::CAD::Point(i,i));
        }

        for(int i = 0; i < stack.GetArray().Size()+1; i++){
            Saurino::CAD::Point temp = stack.Pop();
            cout << i << ": " << temp << endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}