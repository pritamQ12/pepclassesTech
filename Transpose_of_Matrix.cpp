#include<iostream>
using namespace std;

int main()
{
    int a[10][10];
    int r,col;

    cin>>r>>col;

    for(int i=0;i<r;i++)
        for(int j=0;j<col;j++)
            cin>>a[i][j];

    for(int i=0;i<col;i++)
    {
        for(int j=0;j<r;j++)
            cout<<a[j][i]<<" ";

        cout<<endl;
    }

    return 0;
}