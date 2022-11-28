#include<iostream>

class Chef{
    public:
        void makeChicken(){
            std::cout<<"The chef makes chicken"<<std::endl;
        }
        void makeSalad(){
            std::cout<<"The chef makes salad"<<std::endl;
        }
        void makeSpecialDish(){
            std::cout<<"The chef makes bbq ribs"<<std::endl;
        }
};

class ItalianChef: public Chef{ 
    public:       //this guy inherits everything inside public part of chef class
    void makePasta(){
        std::cout<<"the chef makes pasta"<<std::endl;
    }
    void makeSpecialDish(){
        std::cout<<"The chef makes chicken parms"<<std::endl;       //overrides original function
    }
};

int main(){
    Chef chef;
    chef.makeChicken();
    chef.makeSpecialDish();
    ItalianChef italienchef;
    italienchef.makeSalad();
    italienchef.makePasta();
    italienchef.makeSpecialDish();
    //the italian chef can make pasta but the normal one cannot. Inheritance is one way.

    return 0;
}