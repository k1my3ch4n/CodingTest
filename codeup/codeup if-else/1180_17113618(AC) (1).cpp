#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    
    int b;
    
    b = a/10;
    a = a - b*10;
    
    a = a*10 + b;
    a = a << 1;
    
    if(a>100)
        a = a-100;
    cout << a << endl;
    
    if(a>50)
        cout << "OH MY GOD";
    else
        cout << "GOOD";
}

