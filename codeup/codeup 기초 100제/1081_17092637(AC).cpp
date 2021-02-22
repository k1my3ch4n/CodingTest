#include <iostream>
using namespace std;

int main()
{
    int i,j;
    
    cin >> i >> j;
    
    for(int k=1; k<=i; k++)
        for(int l=1; l<=j; l++)
            cout << k << ' ' << l << endl;
}
