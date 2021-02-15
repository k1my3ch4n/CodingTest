#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float n;
    cin >> n;
    cout.setf(ios::fixed);
    cout.precision(6);
    cout << n;
}
