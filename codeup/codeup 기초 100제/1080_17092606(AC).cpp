#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum=0;
    int count = 0;
    cin >> n;
    while(sum<n)
    {
        count++;
        sum = sum + count;
    }
    cout << count;
}
