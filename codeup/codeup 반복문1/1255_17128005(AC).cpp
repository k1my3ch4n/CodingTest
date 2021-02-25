#include <iostream>
using namespace std;

int main()
{
    double a,b;
    cin >> a >> b;

    while(a<=b)
    {
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << a << ' ';
        a = a + 0.01;
    }
}
