#include<iostream>
using namespace std;

int main()
{
    int n,m,flag;

    cin>>n>>m;

    for(int i=n;i<=m;i++)
    {
        flag=1;

        if(i<2)
            continue;

        for(int j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }

        if(flag)
            cout<<i<<" ";
    }

    return 0;
}