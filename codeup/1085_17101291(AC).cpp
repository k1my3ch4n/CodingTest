#include <iostream>
using namespace std;

int main()
{
    double h,b,c,s;
    cin >> h >> b >> c >> s;
    
    double sum;
    
    sum = h * b * c * s;
    
    sum = sum/(1024*1024*8);
    
    cout.setf(ios::fixed);
    cout.precision(1);
    
    cout << sum << " MB";
}
