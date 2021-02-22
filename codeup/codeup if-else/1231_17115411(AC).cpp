#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    cin >> a;
    
    int b;
    int c;
    int len = a.length();
    for(int i = 0; i<len; i++)
    {
        c = i;
        if(a[i] == '+' )
        {
           b = 1;
           break;
        }
        else if(a[i] == '-')
        {
            b = 2;
            break;
        }
        else if(a[i] == '*')
        {
            b = 3;
            break;
        }
        else if(a[i] == '/')
        {
            b = 4;
            break;
        }
    }
    string d;
    int e,f;
    float g,h;
    
    switch(b)
    {
        case 1:
            d = a.substr(0,c);
            e = stoi(d);
            d = a.substr(c+1,len-c+1);
            f = stoi(d);
            
            cout << e+f;
            break;
        case 2:
            d = a.substr(0,c);
            e = stoi(d);
            d = a.substr(c+1,len-c+1);
            f = stoi(d);
            
            cout << e-f;
            break;
        case 3:
            d = a.substr(0,c);
            e = stoi(d);
            d = a.substr(c+1,len-c+1);
            f = stoi(d);
            
            cout << e*f;
            break;
        case 4:
            d = a.substr(0,c);
            g = stoi(d);
            d = a.substr(c+1,len-c+1);
            h = stoi(d);
            
            cout.setf(ios::fixed);
            cout.precision(2);
            
            cout << g/h;
            break;
    };
}

