#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a,b,v;
    
    cin >> a >> b >> v;
    
    int count = 0;
    int sum = a - b;
    v = v-a;
    count ++;    //마지막날
    
    if(v%sum > 0)
        count++;
    
    count = count + v/sum;
    
    cout << count;
}