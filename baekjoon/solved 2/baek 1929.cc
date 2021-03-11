#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int arr[1000001] = {0};
int main()
{
    int a,b;
    cin >> a >> b;
    
    arr[1] = 1;
    if(b >= 2)
    {
        for(int i=2; i <= b; i++)
        {
            if(arr[i] == 0)
            {
                for(int j = 2 * i; j <= b; j+=i)
                {
                    arr[j] = 1;
                }
            }
        }
    }
    for(int i=a; i<=b; i++)
    {
        if(arr[i] == 0)
            cout << i << '\n';
    }
}

