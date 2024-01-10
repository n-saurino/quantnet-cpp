#include <iostream>
#include "Stack.cpp"


using namespace std;

int main(){

    /*
    Testing the StackException class
    */

    Stack<Saurino::CAD::Point> stack(5);
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
    catch(const StackException& e)
    {
        std::cerr << e.GetMessage() << '\n';
    }   
}