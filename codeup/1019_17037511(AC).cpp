#include <iostream>
using namespace std;

int main()
{
    int n,m,k;
    cin >> n;
    cin.ignore(4,'.');
    cin >> m;
    cin.ignore(4,'.');
    cin >> k;
    
    cout.width(4);
    cout.fill('0');
    cout << n << '.';
    cout.width(2);
    cout.fill('0');
    cout << m << '.';
    cout.width(2);
    cout.fill('0');
    cout << k;
}

