#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k;
    
    int count = 0;
    int check = 0;
    
    for(int i=0; i<n; i++)
    {
        cin >> k;
        if(k == 2)
            count++;
        else if(k != 1)
        {
            for(int j=2; j<k; j++)
            {
                if(k%j == 0)
                {
                    check = 1;
                    break;
                }
            }
            if(check == 0)
                count++;
            
            check = 0;
        }
    }
    cout << count;
}