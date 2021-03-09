#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    
    int money;
    int arr[10];
    
    for(int i=0; i<n; i++)
    {
        cin >> money;
        arr[i] = money;
    }
    
    int count = 0;
    int l = n-1;
    while(k>0)
    {
        if(k < arr[l])
        {
            l--;
        }
        else
        {
            k = k - arr[l];
            count++;
        }
    }
    
    cout << count;
}
