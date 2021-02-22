#include <iostream>
using namespace std;

int main()
{
    double a,b;
    cin >> a >> b;
    
    double sum;
    sum = a+b;
    
    double count;
    if(a>b)
        count = a-b;
    else
        count = b-a;
        
    if(count > sum)
        sum = count;
        
    count = a*b;
    if(count > sum)
        sum = count;
        
    if(a>b)
        count = a/b;
    else
        count = b/a;
        
    if(count > sum)
        sum = count;
        
    if(a>b)
    {
        count = b;
        for(int i = 1; i<a; i++)
            count = count*b;
            
        if(count > sum)
            sum = count;
    }
    else
    {
        count = a;
        for(int j = 1; j<b; j++)
            count = count * a;
        
        if(count > sum)
            sum = count;
    }
    cout.setf(ios::fixed);
    cout.precision(6);
    cout << sum;
}

