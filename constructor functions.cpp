#include<iostream>

class Distros{
    public:
        //public attributes
        std::string name;
        std::string package_manager;
        int usingSince;
        //this is basically what we need in the class.
        Distros(std::string aName, std::string aPackageManager, int aUsingSince){         //this is a special function called constructor function. It gets called whenever you call the class.
            name = aName;
            package_manager = aPackageManager;
            usingSince = aUsingSince;
        }
        Distros(){           //this gets called when nothing is specified.
            name = "default";
            package_manager = "default";
            usingSince = 0;
        }
};

int main()
{
    Distros distro1("Fedora", "DNF", 2020);  //this is an object

    std::cout << distro1.name<<std::endl;

    Distros distro2;
    std::cout << distro2.package_manager << std::endl;      //now this runs second constructor
    return 0;
}