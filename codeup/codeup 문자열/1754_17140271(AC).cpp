#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a,b;
    cin >> a >> b;
    
    int lena = a.length();
    int lenb = b.length();
    int i = 0;
    if(lena > lenb)
        cout << b << ' ' << a;
    else if(lena < lenb)
        cout << a << ' ' << b;
    else if(lena == lenb)
    {
        while(true)
        {
            if(a[i] == b[i])
            {
                i = i + 1;
            }
            else if(a[i] > b[i])
            {
                cout << b << ' ' << a;
                break;
            }
            else if(a[i] < b[i])
            {
                cout << a << ' ' << b;
                break;
            }
        }
    }
}

