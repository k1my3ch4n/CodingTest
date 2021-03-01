#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    
    while(n>0)
    {
        if(count == 0)
        {
            n = n-1;
            count++;
        }
        else if(count == 1)
        {
            n = n - 6;
            count++;
        }
        else
        {
            n = n - 6 - 6*(count-1);
            count++;
        }
    }
    cout << count;
}