#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    
    int sum = 0;
    if(a%2 == 0)
        sum = sum - a;
    else
        sum = a;
        
    cout << sum;
    
    if (a != b)
    {
        for(int i = a + 1; i<=b; i++)
        {
            if(i%2 == 1)
            {
                sum = sum + i;
                cout << '+' << i;
            }
            else
            {
                sum = sum - i;
                cout << '-' << i;
            }
        }
    }
    cout << '=' << sum;
}

