#include <iostream>
using namespace std;

int main()
{
    long long int a,b,c,d;
    
    cin >> a >> b >> c;
    d = a+b+c;
    cout << d << endl;
    cout.setf(ios::fixed);
    cout.precision(1);
    cout << (float)d/3;
}
