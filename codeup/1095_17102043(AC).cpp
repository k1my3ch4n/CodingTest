#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int k = 23;
    int c;
    for(int i=1; i<=n; i++)
    {
        cin >> c;
        if(c < k)
            k = c;
    }
    cout << k;
}
