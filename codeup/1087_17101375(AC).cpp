#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >>n;
    
    int sum =0;
    int count = 1;
    
    while(sum < n)
    {
        sum = sum+count;
        count++;
    }
    
    cout << sum;
    
    
}
