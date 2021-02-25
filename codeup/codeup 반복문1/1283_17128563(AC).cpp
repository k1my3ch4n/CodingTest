#include <iostream>
using namespace std;

int main()
{
    int w, d;
    
    cin >> w; 
    cin >> d;
    
    float sum;
    sum = w;
    
    int c;
    
    for(int i=0; i<d; i++)
    {
        cin >> c;
        sum = sum * (100+c) / 100;
    }
    sum = sum - w;
    cout.setf(ios::fixed);
    cout.precision(0);
    
    cout << sum << endl;
    if(sum > 0)
        cout << "good";
    else if(sum == 0)
        cout << "same";
    else 
        cout << "bad";
}

