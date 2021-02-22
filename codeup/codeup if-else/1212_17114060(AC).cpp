#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    
    if(a>=b && a>=c)
    {
        if(a<b+c)
            cout << "yes";
        else
            cout << "no";
    }
    else if(b>=a && b>=c)
    {
        if(b<a+c)
            cout << "yes";
        else
            cout << "no";
    }
    else
    {
        if(c<a+b)
            cout << "yes";
        else
            cout << "no";
    }
}
