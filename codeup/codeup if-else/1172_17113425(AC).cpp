#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a;
    vector<int> b;
    for(int i=0; i<3; i++)
    {
        cin >> a;
        b.push_back(a);
    }
    
    sort(b.begin(), b.end());
    
    for(int j=0; j<b.size(); j++)
        cout << b[j] << ' ';    
}

