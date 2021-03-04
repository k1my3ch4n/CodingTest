#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    queue<int> arr;
    
    for(int i=0; i<n; i++)
    {
        arr.push(i+1);    
    }
    
    int c;
    while(arr.size() > 1)
    {
        arr.pop();
        c = arr.front();
        arr.pop();
        
        arr.push(c);
    }
    
    c = arr.front();
    cout << c;
}