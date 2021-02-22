#include <iostream>
using namespace std;

int main()
{
    int y, m, d;
    
    cin >> y >> m >> d;
    
    int sum;
    sum = y + m + d;
    sum = sum/100;
    
    if(sum%2 == 0)
        cout << "대박";
    else
        cout << "그럭저럭";
}

