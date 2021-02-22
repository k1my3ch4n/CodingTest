#include <iostream>
using namespace std;

int main()
{
    int n, m, k;
    
    cin >> n;
    cin.ignore(4,'.');
    cin >> m;
    cin.ignore(2,'.');
    cin >> k;
    
    cout.width(2);
    cout.fill('0');
    cout << k;
    cout << '-';
    cout.width(2);
    cout.fill('0');
    cout << m;
    cout << '-';
    cout.width(4);
    cout.fill('0');
    cout << n;
}
