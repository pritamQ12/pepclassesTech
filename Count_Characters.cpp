#include<iostream>
using namespace std;

int main()
{
    char str[100];
    int count=0;

    cin.getline(str,100);

    for(int i=0;str[i]!='\0';i++)
        count++;

    cout<<count;

    return 0;
}