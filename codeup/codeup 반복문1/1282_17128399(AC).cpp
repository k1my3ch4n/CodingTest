#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int k = 1;
    int t;
    
    while(k < n)
    {
        t = (k+1) * (k+1);
        if(t>n)
        {
            cout << n - k*k << ' ' << k;
            break;
        }
        else
        {
            k++;
        }
    }
}

