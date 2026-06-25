#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str1[100],str2[100];

    cin.getline(str1,100);
    cin.getline(str2,100);

    strcat(str1,str2);

    cout<<str1;

    return 0;
}