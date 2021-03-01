#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    
    int i = 100;
    int k;
    int c = 0, d = 0;
    while(i>0)
    {
        k = a%10;
        c = c + k*i;
        k = b%10;
        d = d + k*i;
        
        a = a/10;
        b = b/10;
        i = i/10;
    }
    
    if(c>d)
        cout << c;
    else
        cout << d;
}