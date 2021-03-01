#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    string a;
    int k;
    int len;
    
    for(int i=0; i<n; i++)
    {
        cin >> k >> a;
        len = a.length();
        for(int j=0; j<len; j++)
        {
            for(int l=0; l<k; l++)
            {
                cout << a[j];
            }
        }
        cout << endl;
    }
}