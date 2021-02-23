#include <iostream>
using namespace std;

int main()
{
    int a;
    int sum = 0;
    
    for(int i=0; i<2; i++)
    {
        cin >> a;
        if(a%2 == 1)
            sum = sum + a/2 + 1;
        else
            sum = sum + 5 * a ;
    }
    
    cout << sum;
}

