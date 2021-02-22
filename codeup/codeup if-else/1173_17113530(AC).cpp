#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    
    b = b-30;
    
    if(b < 0)
    {
        b = b + 60;
        a = a-1;
        
        if(a<0)
        {
            a = a + 24;
        }
    }
    
    cout << a << ' ' << b;
}

