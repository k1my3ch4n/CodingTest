#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    int count = 0;
    getline(cin,a);
    
    if(a[0] != ' ')
           count++;
    
    if(a.length() == 1)
    {
        if(a[0] == 1)
            count++;
        
        cout << count;
    }
    else
    {    
        for(int i=1; i<a.length(); i++)
        {
            if(a[i-1] == ' ')
                count++;
        }
        
        cout << count;
    }
}