#include <iostream>
using namespace std;

int main()
{
    int y,m;
    cin >> y >> m;
    
    int t = 0;
    if(y%400 == 0)
    {
        t = 1;
    }
    else if(y%4 == 0 && y%100 != 0)
    {
        t = 1;
    }
    
    int d;
    
    switch(m)
    {
        case 1:
            d = 31;
            break;
        case 2:
            d = 28;
            break;
        case 3:
            d = 31;
            break;
        case 4:
            d = 30;
            break;
        case 5:
            d = 31;
            break;
        case 6:
            d = 30;
            break;
        case 7:
            d = 31;
            break;
        case 8:
            d = 31;
            break;
        case 9:
            d = 30;
            break;
        case 10:
            d = 31;
            break;
        case 11:
            d = 30;
            break;
        case 12:
            d = 31;
            break;
    }
    
    if(t == 1 && d == 28)
        cout << d+t;
    else
        cout << d;
}
