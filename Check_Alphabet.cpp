#include<iostream>
using namespace std;

int main()
{
    char ch;

    cin>>ch;

    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
        cout<<"Alphabet";
    else
        cout<<"Not Alphabet";

    return 0;
}