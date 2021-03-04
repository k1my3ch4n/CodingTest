#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int arr[20000];
    int fcount = 9999;
    int bcount = 9999;
    string pf1 = "push_front";
    string pb1 = "push_back";
    string pf2 = "pop_front";
    string pb2 = "pop_back";
    string s = "size";
    string e = "empty";
    string f = "front";
    string b = "back";
    
    string c;
    int k;
    for(int i=0; i<n; i++)
    {
        cin >> c;
        if(c == pf1)
        {
            cin >> k;
            arr[fcount] = k;
            fcount--;
        }
        else if(c == pb1)
        {
            cin >> k;
            bcount++;
            arr[bcount] = k;
        }
        else if(c == pf2)
        {
            if(fcount == bcount)
                cout << "-1" << '\n';
            else
            {
                fcount++;
                cout << arr[fcount] << '\n';
            }
        }
        else if(c == pb2)
        {
            if(fcount == bcount)
                cout << "-1" << '\n';
            else
            {
                cout << arr[bcount] << '\n';
                bcount--;
            }
        }
        else if( c == s)
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
        else if( c == f)
        {
            if(fcount == bcount)
                cout << "-1" << '\n';
            else
                cout << arr[fcount+1] << '\n';
        }
        else if( c == b)
        {
            if(fcount == bcount)
                cout << "-1" << '\n';
            else
                cout << arr[bcount] << '\n';
        }
    }
}