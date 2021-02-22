#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    
    switch(a)
    {
        case 1:
            a = 400;
            break;
        case 2:
            a = 340;
            break;
        case 3:
            a = 170;
            break;
        case 4:
            a = 100;
            break;
        case 5:
            a = 70;
            break;
    }
    switch(b)
    {
        case 1:
            b = 400;
            break;
        case 2:
            b = 340;
            break;
        case 3:
            b = 170;
            break;
        case 4:
            b = 100;
            break;
        case 5:
            b = 70;
            break;
    }
    
    if((a+b) > 500)
        cout << "angry";
    else
        cout << "no angry";
}

