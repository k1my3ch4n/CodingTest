#include <iostream>
#include <vector>
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
    
    int m;
    
    for(int j=0; j<n; j++)
    {
        for(int l=0; l<n; l++)
        {
            cout << a[l] << ' ';
        }
        cout << endl;
        
        m = a[0];
        for(int h=1; h<n; h++)
        {
            a[h-1] = a[h];
        }
        a[n-1] = m;
    }
}
