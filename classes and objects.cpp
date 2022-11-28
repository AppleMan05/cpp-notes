#include<iostream>

class Distros{
    public:
        //public attributes
        std::string name;
        std::string package_manager;
        int usingSince;
        //this is basically what we need in the class.
};

int main()
{
    Distros distro1;  //this is an object
    distro1.name = "Fedora";
    distro1.package_manager = "DNF";
    distro1.usingSince = 2020;     //this is very useful.

    std::cout << distro1.name;
    return 0;
}