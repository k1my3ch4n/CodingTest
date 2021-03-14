#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<string> arr1; 
    
    string c;
    int a;
    int big = 0;
    
    for(int i=0; i<n; i++)
    {
        cin >> c;
        a = c.size();
        
        if(a > big)
            big = a;
        
        arr1.push_back(c);
    }
    
    sort(arr1.begin(), arr1.end());
    
    vector<string> arr2;
    
    for(int i=0; i<=big; i++)
    {
        for(int j=0; j<arr1.size(); j++)
        {
            if(arr1[j].size() == i)
            {
                if(arr2.empty())
                {
                    arr2.push_back(arr1[j]);
                }
                else if(arr2[arr2.size()-1] != arr1[j])
                {
                    arr2.push_back(arr1[j]);
                }
            }
        }
    }
    
    for(int i=0; i<arr2.size(); i++)
    {
        cout << arr2[i] << '\n';
    }
}