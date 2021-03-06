#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int sum;
    int part;
    
    for(int i=0; i<n; i++)
    {
        sum = i;
        part = i;
        
        while(part)
        {
            sum = sum + part%10;
            part = part/10;
        }
        
        if(sum == n)
        {
            cout << i;
            return 0;
        }
    }
    
    cout << "0";    
}