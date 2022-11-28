#include<iostream>

int main()
{               //[number of elements in the main array][number of elements in inside array]
    int NumberGrid[3][2] = {
                            {1,2}, 
                            {3,4},
                            {5,6}
                        };
    std::cout<<NumberGrid[0][1]<<std::endl;
    std::cout<<std::endl;

    for(int i=0; i<3; i++){             //nested loop
        for(int j=0; j<2; j++){
            std::cout<<NumberGrid[i][j]<<std::endl;
        }
    }
    return 0;
}