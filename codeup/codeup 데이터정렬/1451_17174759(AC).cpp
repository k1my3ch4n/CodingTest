#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> a;
    int k;
    for(int i=0; i<n; i++)
    {
        cin >> k;
        a.push_back(k);
    }
    
    sort(a.begin(), a.end());
    
    for(int i=0; i<n; i++)
    {
        cout << a[i] << endl;
    }
}
