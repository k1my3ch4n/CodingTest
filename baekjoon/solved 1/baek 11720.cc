#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string a;
    int n;
    cin>>n;
    
    int b, sum = 0;
    cin >> a;
    string c;
    
    for(int i=0; i<n; i++)
    {
        c = a[i];
        b = stoi(c);
        sum = sum + b;
    }
    
    cout << sum;
}
