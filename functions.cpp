#include<iostream>

using namespace std;

void sayHi(); //function stub, needs to be before the main function
void sayHello(string name) //takes one argument "name" that must be passed.
{
    cout<<"hello "<<name<<endl;
}

//functions should be declared before the main function. else, use a function stub.

int main()
{
    sayHi(); //calling the function
    sayHello("aryan");
    return 0;
}

void sayHi()
{
    cout<<"hello user"<<endl;
}
