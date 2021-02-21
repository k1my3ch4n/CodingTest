#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> a;
    int c;
    for(int i=0; i<n;i++)
    {
        cin >> c;
        a.push_back(c);
    }
    
    for(int j=n; j>0; j--)
    {
        cout << a[j-1] << ' ';
    }
}
