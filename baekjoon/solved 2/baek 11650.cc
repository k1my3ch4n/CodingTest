#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{    
    int n;
    cin >> n;
    
    int a,b;
    
    vector<pair<int,int>> arr;
    vector<pair<int,int>>::iterator iter;
    
    for(int i = 0; i<n; i++)
    {
        cin >> a >> b;
        arr.push_back(pair<int,int>(a,b));
    }
    sort(arr.begin(),arr.end());
    
    for(iter=arr.begin();iter<arr.end(); iter++)
    {
        cout << iter->first << ' ' << iter->second << '\n';
    }
}