#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string n;
    cin >> n;
    
    int len = n.length();
    int arr[26] = {0};
    for(int i=0; i<len; i++)
    {
        char c = n[i];
        if(c >= 65 && c <= 90)
        {
            arr[c-65]++;
        }
        else if(c >= 97 && c <= 122)
        {
            arr[c-97]++;
        }
    }
    
    int big = arr[0];
    int bigi = 0;
    int check = 0;
    
    for(int i=1; i<26; i++)
    {
        if(arr[i] > big)
        {
            big = arr[i];
            bigi = i;
            check = 0;
        }
        else if(arr[i] == big)
        {
            check = 1;
        }
    }
    
    if(check == 1)
        cout << "?";
    else
        cout << static_cast<char>(bigi+65);
}
