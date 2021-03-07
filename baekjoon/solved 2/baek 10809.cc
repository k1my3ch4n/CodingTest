#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    string al = "abcdefghijklmnopqrstuvwxyz";
    int len = al.length();
    
    for(int i=0; i<len; i++)
    {
        cout << (int)s.find(al[i]) << " ";
    }
}
