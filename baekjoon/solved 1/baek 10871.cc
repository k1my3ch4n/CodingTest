#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,x;
    cin >> n >> x;
    
    vector<int> arr;
    int k;
    for(int i=0; i<n; i++)
    {
        cin >> k;
        if(k < x)
            arr.push_back(k);
    }
    
    for(int i=0; i<arr.size(); i++)
    {
        cout << arr[i] << ' ';
    }
}
