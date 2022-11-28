#include<iostream>

using namespace std;

//when declaring a function, if you are expecting a value out of it, you need to declare it with that type. so if you are expecting to get an integer out of a function, you need to define it as an int.

double cube(double num)
{
    double result = num*num*num;
    return result; //the return keyword means that the function is done. any further lines wont be executed.
    //cout<<"see how this wont be printed? hah"
}


int main()
{
    double answer  = cube(5.0);
    cout<<answer;
    return 0;
}