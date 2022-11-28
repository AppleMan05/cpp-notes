#include<iostream>

int main()
{
    int age = 17;
    double gpa = 2.7;
    std::string name = "aryan";
    std::cout << "Age:" << &age << std::endl; //prints memory address of where age variable is stored. This is a pointer.
    std::cout << "GPA:" << &gpa << std::endl;
    std::cout << "Name:" << &name << std::endl;

    int *pAge = &age;  //need * to tell C++ that its a pointer.
    double *pGPA = &gpa;
    std::string *pName = &name;
    std::cout << pAge << std::endl;  //this gives out the pointer.
    std::cout << *pAge;  //this is called dereferencing a pointer. That is, accessing the value stored in the memory location manually.
    return 0;
}