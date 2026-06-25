#include<iostream>
using namespace std;

int main()
{
    float principal,rate,time,si;//

    cin>>principal>>rate>>time;

    si=(principal*rate*time)/100;

    cout<<"Simple Interest = "<<si;

    return 0;
}