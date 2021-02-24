#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int k;
    vector<int> a;
    
    if(n == 0)
        cout << 0;
    else
    {
    while(n>0)
    {
        if(n%2 == 0)
        {
            a.push_back(0);
            n = n/2;
        }
        else
        {
            a.push_back(1);
            n = n/2;
        }
    }

    for(int i = a.size()-1; i>=0; i--)
    {
        cout << a[i];
    }
    }
}

