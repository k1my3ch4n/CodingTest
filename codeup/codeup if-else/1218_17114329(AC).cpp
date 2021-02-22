#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int d,e,f;
    d = a*a;
    e = b*b;
    f = c*c;
    
    if(c>=a+b)
        cout << "삼각형아님";
    else if(a == b && b == c)
        cout << "정삼각형";
    else if(a == b || a == c || b == c)
        cout << "이등변삼각형";
    else if(d+e == f)
        cout << "직각삼각형";
    else
        cout << "삼각형";
}
