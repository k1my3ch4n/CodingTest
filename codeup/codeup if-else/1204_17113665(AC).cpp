#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    
    if(a == 11 || a == 12 || a == 13)
        cout << a << "th";
    else if(a%10 == 1)
        cout << a << "st";
    else if(a%10 == 2)
        cout << a << "nd";
    else if(a%10 == 3)
        cout << a << "rd";
    else
        cout << a << "th";
}

