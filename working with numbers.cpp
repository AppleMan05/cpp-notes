#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    cout << 40<<endl;
    cout << 5+7<<endl;
    cout << 12/3<<endl;
    cout << 10%3<<endl; //this is a modulus operaator
    int wnum = 5;
    wnum++;
    cout <<wnum<<endl;
    wnum +=80;
    cout<<wnum<<endl;

    cout <<10/3<<endl; //this will give only integer as output as the numbers in there are ints
    cout <<14-5.5<<endl; //this will give decimal
    cout << 10.0/3.0<<endl;

    cout << "Math stuff below:"<<endl;
    cout << pow(2, 5)<<endl; //2^5
    cout << sqrt(36)<<endl;
    cout << round(4.3)<<endl;
    cout << fmax(3,10); //gives bigger number
    return 0;
}