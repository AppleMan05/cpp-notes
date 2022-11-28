#include<iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::string;
    using std::endl;

    cout<<"what operating system do you use?"<<endl;
    string osInput;
    cin>>osInput;

    cout<<"Do you like Apple products?[Y/n]";
    char appleInput;
    cin>>appleInput;

    if(osInput == "windows" && appleInput=='n'){
        cout<<"you seem OK to me";
    }
    return 0;
}

