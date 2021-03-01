#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    
    int Nsum = 1;
    int Ksum = 1;
    for(int i = 1; i<=k; i++)
    {
        Nsum = Nsum * n;
        Ksum = Ksum * i;
        n--;
    }
    
    cout << Nsum/Ksum;
    
}