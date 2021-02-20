#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char c;
    int a;
    cin >> c;
    
    switch(c)
    {
        case 'A':
            a=10;
            break;
        case 'B':
            a=11;
            break;
        case 'C':
            a=12;
            break;
        case 'D':
            a=13;
            break;
        case 'E':
            a=14;
            break;
        case 'F':
            a=15;
            break;
    }
    
    for(int i=1; i<16;i++)
    {
        cout.setf(ios::uppercase); 
        cout << c << '*' << hex << i << '=' << hex << i*a<< endl;
    }
}
