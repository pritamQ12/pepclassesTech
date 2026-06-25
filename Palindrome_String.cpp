#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[100];

    cin.getline(str,100);

    int i=0,j=strlen(str)-1;
    int flag=1;

    while(i<j)
    {
        if(str[i]!=str[j])
        {
            flag=0;
            break;
        }
        i++;
        j--;
    }

    if(flag)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";

    return 0;
}