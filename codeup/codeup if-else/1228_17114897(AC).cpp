#include <iostream>
using namespace std;

int main()
{
    double a,b;
    cin >> a >> b;
    
    double p,t;
    p = (a-100) * 0.9;
    
    t = (b - p) * 100 / p;
    
    if(t>20)
        cout << "비만";
    else if(t<=10)
        cout << "정상";
    else
        cout << "과체중";
}
