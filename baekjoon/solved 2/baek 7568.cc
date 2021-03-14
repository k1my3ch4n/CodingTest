#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
        
    int arr[50][2] = {};
    int ans[50];
    
    for(int i=0; i<n; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
        ans[i] = 1;
    }
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1])
                ans[i]++;
        }
    }
    
    for(int i=0; i<n; i++)
    {
        cout << ans[i] << ' ';
    }
}

