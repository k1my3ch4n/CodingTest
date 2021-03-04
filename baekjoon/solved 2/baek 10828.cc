#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>> n;
    
    vector<int> arr;
    string p1 = "push";
    string p2 = "pop";
    string s = "size";
    string e = "empty";
    string t = "top";
    string c;
    int k;
    for(int i=0; i<n; i++)
    {
        cin >> c;
        if(c == p1)
        {
            cin >> k;
            arr.push_back(k);
        }
        else if(c == p2)
        {
            if(arr.size() == 0)
            {
                cout << "-1" << '\n';
            }
            else
            {
                cout << arr[arr.size()-1] << '\n';
                arr.pop_back();
            }
        }
        else if(c == s)
        {
            cout << arr.size() << '\n';
        }
        else if(c == e)
        {
            if(arr.size() == 0)
                cout << "1" << '\n';
            else
                cout << "0" << '\n';
        }
        else if(c == t)
        {
            if(arr.size() == 0)
                cout << "-1" << '\n';
            else
                cout << arr[arr.size()-1] << '\n';
        }
    }
}