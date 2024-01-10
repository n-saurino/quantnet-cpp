#include <iostream>
#include "Stack.cpp"


using namespace std;

int main(){

    /*
    Testing the Stack template with specific size set
    Note that now only stacks with the same size template argument can be copied/assigned.
    */

    Stack<Saurino::CAD::Point, 5> stack;
    Stack<Saurino::CAD::Point, 5> stack5;
    Stack<Saurino::CAD::Point, 7> stack7;

    try
    {
        for(int i = 0; i < stack.GetArray().Size(); i++){
           stack.Push(Saurino::CAD::Point(i,i));
        }

        stack5 = stack;

        for(int i = 0; i < stack5.GetArray().Size(); i++){
            Saurino::CAD::Point temp = stack5.Pop();
            cout << i << ": " << temp << endl;
        }
        // Error occurs when trying to assign templates of two different types
        // based on size
        // stack7 = stack5;
    }
    catch(const StackException& e)
    {
        std::cerr << e.GetMessage() << '\n';
    }   
}