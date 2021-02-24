#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    cin >> a;
    
    int len = a.length();
    int sum = 0;
    int count;
    
    for(int i=0; i<len; i++)
    {
        count = a[i] - '0';
        sum = sum + count;
    }
    
    if(sum%3 == 0)
        cout << "1";
    else
        cout << "0";
}
