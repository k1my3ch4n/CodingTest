#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int tf = 0;
    int k1 = 2;
    int k2;
    
    if(n == 1)
        tf = 1;
    else
    {
        while(k1<n)
        {
            if(n%k1 != 0)
            {
                k1++;
            }
            else if(n%k1 == 0)
            {
                k2 = n/k1;
                break;
            }
        }
        
        if(k2 == 1)
            tf = 1;
        else if(k2 != 2)
        {
            for(int i = 2; i<k2; i++)
            {
                if(k1 == i)
                {
                    if(k2%i == 0)
                    {
                        tf = 1;
                        break;
                    }
                }
                else
                {
                    if(k1%i == 0 || k2%i == 0)
                    {
                        tf = 1;
                        break;
                    }
                }
            }
        }
        
        if(k1 == n)
            tf = 1;
    }
    
    if(tf == 1)
        cout << "wrong number";
    else if(tf == 0)
        cout << k1 << ' ' << k2;
}

