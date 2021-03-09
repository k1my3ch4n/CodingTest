#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> arr;
    
    int k;
    
    for(int i=0; i<n; i++)
    {
        cin >> k;
        arr.push_back(k);
    }
    
    int allsum = 0;
    int sum = 0;
    
    sort(arr.begin(), arr.end());
    
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
        allsum += sum;
    }
    
    cout << allsum;
}
