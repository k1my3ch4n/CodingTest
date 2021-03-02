#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n; 
    
    vector<pair<int, int>> arr;
    vector<pair<int, int>> ::iterator iter;
    
    int a,b;
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        arr.push_back(pair<int,int>(b,a));
    }
    
    sort(arr.begin(), arr.end());
    
    for(iter = arr.begin(); iter !=arr.end(); iter++)
    {
        cout << iter->second << ' ' << iter->first << '\n';
    }
}
