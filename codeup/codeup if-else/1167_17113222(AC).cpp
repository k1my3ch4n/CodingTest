#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    if((b>=a && a>=c)||(c>=a&& a>=b)) //bac cab
        cout << a;
    else if((a>=b&&b>=c)||(c>=b&&b>=a))
        cout << b;
    else
        cout << c;
}

