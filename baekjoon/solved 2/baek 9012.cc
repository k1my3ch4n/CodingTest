#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    string s;
    
    int len;
    int check = 0;
    
    for(int i=0; i<n; i++)
    {
        check = 0;
        cin >> s;
        len = s.length();
        
        for(int j=0; j<len; j++)
        {
            char c = s[j];
            if(c == '(' && check >= 0)
                check++;
            else
                check--;
        }
        
        
        if(check == 0)
            cout << "YES" << endl;
        else if(check != 0)
            cout << "NO" << endl;
    }    
}