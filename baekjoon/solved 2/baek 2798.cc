#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    
    vector<int> arr;
    int k;
    
    for(int i=0; i<n; i++)
    {
        cin >> k;
        arr.push_back(k);
    }

    int bcount = 99999999;
    int ans;
    int sum = 0;
    int count;
    
    for(int i=0; i<n-2; i++)
    {
        for(int j = i+1; j<n-1; j++)
        {
            for(int l = j+1; l<n ; l++)
            {
                sum =arr[i] + arr[j] + arr[l];
                 
                if(m - sum < bcount && m - sum >= 0)
                {
                    bcount = m - sum;
                    ans = sum;
                }
            }
        }
        sum = 0;
    }
    cout << ans;
}