#include<iostream>

using namespace std;

int main()
{
    bool isLinux=true;
    bool isAppleFanboy=true;
    
    //if(isLinux){     //if true then executes
    //    cout<<"congrats ur a linux user"<<endl;
    //}
    //else{
    //    cout<<"sorry bro i dont talk to noobs"<<endl;
    //}
    if(isLinux && isAppleFanboy){    //i used the AND operator, basically means that both should be true for this to get executed
        cout<<"wtf bro linux on apple"<<endl;
    }

    else if(isLinux || isAppleFanboy){   //OR operator, basically if one of them is true then it gets executed
        cout<<"aaaaaaa you either use apple or linux"<<endl;
    }
    else if(isAppleFanboy && !isLinux){
        cout<<"ur a filthy apple fanboy and dont use linux!"<<endl;
    }
    return 0;
}