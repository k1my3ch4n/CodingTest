#include <iostream>
using namespace std;

int main()
{
    int a,b;
    char c;
    
    cin >> a >> b >> c;
    
    if(c == 'L')
    {
        for(int i = 0; i<a; i++)
        {
            if(i != 0 )
            {
                for(int k = 0; k<i; k++)
                {
                    cout << ' ';
                }
            }
            
            for(int j = 0; j<b; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    else if( c == 'R')
    {
        for(int i=0; i<a; i++)
        {
            int d;
            d = a-i-1;
            
            if(d != 0)
            {
                for(int k = 0; k<d; k++)
                {
                    cout << ' ';
                }
            }
            
            for(int j=0; j<b; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
}
