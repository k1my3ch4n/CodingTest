#include <iostream>
using namespace std;

int main()
{
    double w,h,b;
    cin >> w >> h >> b;
    
    double sum;
    sum = w * h * b;
    
    sum = sum/(8*1024*1024);
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    cout << sum << " MB";
}
