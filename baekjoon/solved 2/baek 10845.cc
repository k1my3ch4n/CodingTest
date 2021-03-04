#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    string p1 = "push";
    string p2 = "pop";
    string s = "size";
    string e = "empty";
    string f = "front";
    string b = "back";
    
    string c;
    int k;
    int arr[10000] = {-1};
    int fcount = 0;
    int bcount = 0;
    
    for(int i=0; i<n; i++)
    {
        cin >> c;
        if(c == p1)
        {
            cin >> k;
            arr[bcount] = k;
            bcount++;
        }
        else if(c == p2)
        {
            if(fcount==bcount)
                cout << "-1" << '\n';
            else
            {
                cout << arr[fcount] << '\n';
                arr[fcount] = -1;
                fcount++;
            }
        }
        else if(c == s)
        {
            cout << bcount - fcount << '\n';
        }
        else if(c == e)
        {
            if(fcount == bcount)
                cout << "1" << '\n';
            else
                cout << "0" << '\n';
        }
        else if(c == f)
        {
            if(fcount == bcount)
                cout << "-1" << '\n';
            else
                cout << arr[fcount] << '\n';
        }
        else if(c == b)
        {
            if(fcount == bcount)
                cout << "-1" << '\n';
            else 
                cout << arr[bcount-1] << '\n';
        }
    }
}