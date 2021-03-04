#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 0,b = 0;
    while(true)
    {
        if(n%5 == 0)
        {
            a = a + n/5;
            break;
        }
        else if(n%3 == 0)
        {
            b = b + n/3;
            a = a + b/5 * 3;
            b = b%5;
            break;
        }
        else
        {
            n = n - 8;
            a++;
            b++;
            if(n<0)
            {
                a = -1;
                b = 0;
                break;
            }
        }
    }
    
    cout << a+b;
}