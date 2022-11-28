#include<iostream>

int power(int base, int power)
{

    int result = 1;
    for(int i=0; i<power; i++){
        result = result * base;
    }
    return result;
}

int main()
{
    std::cout<<power(2,4)<<std::endl;
    return 0;
}