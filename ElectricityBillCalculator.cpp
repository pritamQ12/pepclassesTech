#include<iostream>
using namespace std;

int main()
{
    int unit;
    float bill;

    cin>>unit;

    if(unit<=100)
        bill=unit*2;
    else if(unit<=200)
        bill=(100*2)+(unit-100)*3;
    else
        bill=(100*2)+(100*3)+(unit-200)*5;

    cout<<bill;

    return 0;
}