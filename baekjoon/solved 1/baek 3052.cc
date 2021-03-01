#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int arr[42] = {0};
    
    int k;
    for(int i=0; i<10; i++)
    {
        cin >> k;
        k = k%42;
        arr[k]++;
    }
    int count = 0;
    
    for(int i=0; i<42; i++)
    {
        if(arr[i] > 0)
            count++;
    }
    cout << count;
    
}