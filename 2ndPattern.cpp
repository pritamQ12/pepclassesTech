#include<iostream>
using namespace std;
 int main(){
 int n =7;
 int s =0;
 for(int i =1;i<=n;i++)
 {

    if(i%2==0)
    {
        cout<<i<<"+";s=s-i;
    }
    else{
        cout<<i<<"-";s=s+i;
    }
    
}
return 0;
 }