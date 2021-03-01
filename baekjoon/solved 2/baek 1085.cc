#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int x,y,w,h;
    
    cin >> x >> y >> w >> h;
    
    int small = x;
    if(small > y)
        small = y;
    if(small > w - x)
        small = w - x;
    if(small > h - y)
        small = h - y;
    
    cout << small;
}