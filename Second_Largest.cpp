#include<iostream>
using namespace std;

int main()
{
    int n,a[100];

    cin>>n;

    for(int i=0;i<n;i++)
        cin>>a[i];

    int first=a[0],second=a[0];

    for(int i=0;i<n;i++)
    {
        if(a[i]>first)
        {
            second=first;
            first=a[i];
        }
        else if(a[i]>second && a[i]!=first)
        {
            second=a[i];
        }
    }

    cout<<second;

    return 0;
}