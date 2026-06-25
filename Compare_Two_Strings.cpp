#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str1[100],str2[100];

    cin.getline(str1,100);
    cin.getline(str2,100);

    if(strcmp(str1,str2)==0)
        cout<<"Equal";
    else
        cout<<"Not Equal";

    return 0;
}