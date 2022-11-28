#include<iostream>

using namespace std;
int main()
{
    int fedoraVersions[] = {32,33,34,35,36}; //this array can only store 5 elements and nothing more than that.
    //the [] means we're defining an array. 

    cout <<fedoraVersions[0]<<" was the first i used."<<endl;
    fedoraVersions[0]=1;
    cout<<fedoraVersions[0]<<endl;
    int testingList[20]={}; //this array can have upto 20 elements.
    testingList[9]=10;
    cout<<testingList[9]<<endl;
    return 0;
}