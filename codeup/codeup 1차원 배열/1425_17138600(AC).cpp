#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    
    vector<int> h;
    int m;
    
    for(int i=0; i<n; i++)
    {
        cin >> m;
        h.push_back(m);
    }
    
    sort(h.begin(), h.end());
    
    for(int i=0; i<n; i++)
    {
        cout << h[i] << " ";
        if(i%k == k-1)
            cout << endl;
    }
}
