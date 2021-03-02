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
    vector<int> arr;
    
    for(int i =0 ; i<n; i++)
    {
        cin >> k;
        arr.push_back(k);
    }
    
    sort(arr.begin(), arr.end());
    
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << '\n';
    }
}
