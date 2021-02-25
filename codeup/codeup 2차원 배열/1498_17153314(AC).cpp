#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n,g;
    cin >> n >> g;
    
    vector<int> a;
    int k;
    
    int small;
    
    if(g == 1)
    {
        for(int s=0; s<n; s++)
        {
            cin >> k;
            a.push_back(k);
        }
    }
    else
    {
    for(int i=1; i<=n; i++)
    {
        cin >> k;
        if(i%g == 1 && i != n)
        {
            small = k;
        }
        else if(i%g == 1 && i == n)
        {
            a.push_back(k);
        }
        else if(i%g == 0 || i == n)
        {
            if(small > k)
                small = k;
                
            a.push_back(small);
        }
        else
        {
            if(small > k)
            {
                small = k;
            }
        }
    }
    }
    for(int j=0; j < a.size();j++)
    {
        cout << a[j] << ' ';
    }
}
