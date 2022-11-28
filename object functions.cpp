#include<iostream>

class Student{
    public:
        std::string name;
        std::string major;
        double gpa;
        Student(std::string aName, std::string aMajor, double aGPA){
            name = aName;
            major = aMajor;
            gpa = aGPA;
        }

        bool hasHonors(){               //this is a object function
            if(gpa >= 3.5){
                return true;
            }
            return false;
        }
};

int main()
{
    Student student1("jim", "cybersec", 3.0);
    Student student2("pam", "programming", 3.6);

    std::cout << student1.hasHonors();
    return 0;
}