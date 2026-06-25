#include<iostream>
using namespace std;

int main()
{
    char ch;

    cin>>ch;

    if(ch>='A' && ch<='Z')
        cout<<"Uppercase";
    else if(ch>='a' && ch<='z')
        cout<<"Lowercase";
    else
        cout<<"Invalid";

    return 0;
}