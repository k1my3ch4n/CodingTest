#include <iostream>
using namespace std;

int main()
{
    int s, a,b;
    cin >> s >> a >> b;
    
    int t = 90;
    t = t - s;
    
    if(t%5 == 0)
        t = t/5;
    else
        t = t/5 + 1;
        
    if(a+t > b)
        cout << "win";
    else if(a+t < b)
        cout << "lose";
    else
        cout << "same";
}
