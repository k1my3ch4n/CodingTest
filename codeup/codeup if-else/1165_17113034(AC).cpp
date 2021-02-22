#include <iostream>
using namespace std;

int main()
{
    int t, s;
    
    cin >> t >> s;
    
    int c = 90;
    c = c-t;
    if(c%5 == 0)
        c = c/5;
    else
        c = c/5+1;
    
    cout << c+s;
}

