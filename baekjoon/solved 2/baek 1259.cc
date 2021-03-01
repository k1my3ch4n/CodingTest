#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string a;
    int len;
    int check = 0;
    while(cin >> a)
    {
        if(a == "0")
            break;
        else
        {
            len = a.length();
            if(len != 1)
            {
            for(int i=0; i<len/2; i++)
            {
                if(a[i] != a[len-i-1])
                {
                    check = 1;
                    break;
                }
            }
            }
            if(check == 1)
                cout << "no" << endl;
            else
                cout << "yes" << endl;
            
            check = 0;
        }
    }
}