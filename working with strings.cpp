#include <iostream>

int main()
{
    using std::cout;
    using std::string;
    string distro = "fedora fedora fedoraaaaaaaaaaaaaaaaa";
    using std::endl;
    cout << distro.length() << endl;
    cout << distro[3] << endl;
    distro[0] = 'b';
    cout << distro << endl;
    using std::find;
    cout << distro.find("fedora", 0) << endl;
    return 0;
}