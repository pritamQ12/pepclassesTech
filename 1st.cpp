#include <iostream>
using namespace std;
int main() {
int n = 5;
int s = 0;
for(int i = 1; i <= n; i++)
    {
s += i;
if(i == n)
        {
            cout << i << "=";
        }
        else
        {
            cout << i << "+";
        }
    }

    cout << s;

    return 0;
}