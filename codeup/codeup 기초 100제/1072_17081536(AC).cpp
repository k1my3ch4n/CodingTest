#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a,n;
    cin >> n;
    vector<int> c;
    for(int i=0; i< n; i++)
    {
        cin >> a;
        c.push_back(a);
    }
    
    for(int i=0; i< n; i++)
        cout << c[i] << endl;
}
