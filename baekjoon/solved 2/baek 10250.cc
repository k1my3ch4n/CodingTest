#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int k;
    cin >> k; // testcase
   
    int h,w,n;
    int count = 1;
    int sum = 0;
    
    for(int i=0; i<k; i++)
    {
        cin >> h >> w >> n;
    
        while(n>h)
        {
            n = n-h;
            count++;
        }
 
        sum = sum + n * 100 + count; 
        
        cout << sum << endl;
        
        sum = 0;
        count = 1;
    }
}