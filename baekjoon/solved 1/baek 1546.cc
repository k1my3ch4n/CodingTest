#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> arr;
    int k;
    
    for(int i=0; i<n; i++)
    {
        cin >> k;
        arr.push_back(k);
    }
    
    int big = arr[0];
    float sum = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > big)
            big = arr[i];
        
        sum = sum + arr[i];
    }
    
    cout.setf(ios::fixed);
    cout.precision(5);
    cout << (sum*100)/(n*big);
    
    
}
