#include<iostream>
using namespace std;

int main()
{
    int n,temp,rev=0,r;
    cin>>n;
    temp=n;
    while(temp!=0)
    {
    r=temp%10;
    rev=rev*10+r;
    temp=temp/10;
    }
    if(rev==n)
    cout<<"Palindrome";
    else
    cout<<"Not Palindrome";
    return 0;
}