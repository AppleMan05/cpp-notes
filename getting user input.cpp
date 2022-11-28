#include<iostream>

using namespace std;

int main()
{
    int age;
    cout <<"enter age bro ";
    cin>>age;
    cout <<"you are "<<age<<" years old."<<endl;
    string name;
    cout <<"enter name bruh ";
    getline(cin, name); //entire line we enter is saved
    cout<<"hello "<<name;
    return 0;
}