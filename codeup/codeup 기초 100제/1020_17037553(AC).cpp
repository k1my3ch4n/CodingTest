#include <iostream>
using namespace std;

int main()
{
    int n, m;

    cin >> n;
    cin.ignore(6,'-');
    cin >> m;
    
    cout.width(6);
    cout.fill('0');
    cout << n;
    cout << m ;
}

