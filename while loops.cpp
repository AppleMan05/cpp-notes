#include<iostream>
//using namespace std;

int main()
{
    int index = 1;
    while(index <= 5){
        std::cout<<index<<std::endl;
        index++;
    }

    int index2 = 6;
    std::cout<<"do while loop below. it basically executes first then checks the condition. a normal while loop checks condition first."<<std::endl;
    do{
        std::cout<<index2<<std::endl;
        index2++;
    }while(index2 <=5);
    return 0;
}