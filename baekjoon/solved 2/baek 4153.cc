#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a,b,c;
    
    while(cin >> a >> b >> c)
    {
        if(a==0 && b==0 && c==0)
            break;
        else
        {
            if(a>=b && a>=c)
            {
                a = a*a;
                b = b*b;
                c = c*c;
                if(b+c == a)
                    cout << "right" << '\n';
                else
                    cout << "wrong" << '\n';
            }
            else if ( b>=a && b>=c)
            {
                a = a*a;
                b = b*b;
                c = c*c;
                if(a+c == b)
                    cout << "right" << '\n';
                else
                    cout << "wrong" << '\n';
            }
            else if( c>=a && c >= b)
            {
                a = a*a;
                b = b*b;
                c = c*c;
                if(a+b == c)
                    cout << "right" << '\n';
                else
                    cout << "wrong" << '\n';
            }
        }
    }
}