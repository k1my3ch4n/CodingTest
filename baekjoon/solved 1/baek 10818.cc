#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int big;
    int small;
    
    int n;
    cin >> n;
    int k;
    
    cin >> k;
    big = k;
    small = k;
    
    if(n == 1)
    {
       cout << small << ' ' << big; 
    }
    else
    {
        while(n>1)
        {
            cin >> k;
            if(k > big)
            {
                big = k;
            }
            if(k<small)
            {
                small = k;
            }
            n--;
        }
        
        cout << small << ' '<< big;
    }
}
