#include <iostream>
#include <string>
using namespace std;

int main()
{
    double a,b;
    cin >> a >> b;

    cout.setf(ios::fixed);
    cout.precision(15);
    cout << a/b;
}
