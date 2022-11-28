#include<iostream>

int main()
{       //index variable; condition for loop; line that gets executed on end of loop
    for(int i = 1; i <= 5; i++){
        std::cout<<i<<std::endl;
    }//this is equivalent to the while loop we made in this tutorial

    int nums[] = {6,7,8,9,10};
    for(int i = 0; i<=4; i++){
        std::cout<<nums[i]<<std::endl;
    }
    return 0;
}