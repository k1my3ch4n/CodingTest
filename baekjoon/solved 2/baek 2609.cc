#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    
    int count = 2;
    int sum = 1;
    
    while(count <= a || count <= b)
    {
        if(a%count == 0 && b%count == 0)
        {
            a = a/count;
            b = b/count;
            
            sum = sum * count;
            count = 2;
        }
        else
            count++;
    }
    
    cout << sum << '\n';
    cout << sum * a * b;
}
