#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int count = 0;
    while(count < n)
    {
        count++;
        if(count%3 != 0)
            cout << count << ' ';
    }
}
