#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int len = a.length();
    
    int c1 = 0, c2 = 0 ;
    for(int i = 0; i<len; i++)
    {
        if(a[i] == '(')
            c1 = c1 + 1;
        else if(a[i] == ')')
            c2 = c2 + 1;
    }
    
    cout << c1 << ' ' << c2;
}

