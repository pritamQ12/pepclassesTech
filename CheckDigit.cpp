#include<iostream>
using namespace std;

int main()
{
    char ch;

    cin>>ch;

    if(ch>='0' && ch<='9')
        cout<<"Digit";
    else
        cout<<"Not Digit";

    return 0;
}