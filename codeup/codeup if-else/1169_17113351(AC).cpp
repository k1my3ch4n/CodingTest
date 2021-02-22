#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    
    int b = 112 ,c = 12;
    int d;
    
    if(a>13)
    {
        b = b - a + 1;
        d = 1;
        
        cout << b << ' ' << d;
    }
    else
    {
        c = c - a + 1;
        d = 3;
        
        cout << c << ' ' << d;
    }
}

