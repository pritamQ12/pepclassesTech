#include<iostream>
using namespace std;

int main()
{
    int n,temp,r,sum=0,fact;

    cin>>n;

    temp=n;

    while(temp!=0)
    {
        r=temp%10;
        fact=1;

        for(int i=1;i<=r;i++)
            fact=fact*i;

        sum=sum+fact;
        temp=temp/10;
    }

    if(sum==n)
        cout<<"Strong Number";
    else
        cout<<"Not Strong Number";

    return 0;
}