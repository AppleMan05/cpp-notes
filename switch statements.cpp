#include<iostream>
using namespace std;

string getDistro(int distroNum)
{
    string distroName;
    switch(distroNum)
    {
        case 0:
            distroName = "Fedora";
            break;
        case 1:
            distroName = "Ubuntu";
            break;
        case 2:
            distroName = "Linux Mint";
            break;
        default:
            distroName = "invalid input bruh";
    }


    return distroName;
}


int main()
{
    int distroInput;
    cout<<"Put in any number from 0 to 2"<<endl;
    cin>>distroInput;
    cout<<getDistro(distroInput)<<endl;
    return 0;
}