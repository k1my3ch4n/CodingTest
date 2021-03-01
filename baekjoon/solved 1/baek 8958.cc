#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    string a;
    int len;
    int count = 0;
    int sum = 0;
    vector<int> arr;
    
    for(int i=0; i<n; i++)
    {
        cin >> a;
        len = a.length();
        
        for(int j=0; j<len; j++)
        {
            if(a[j] == 'O')
            {
                count++;
            }
            else if(a[j] == 'X')
            {
                count = 0;
            }
            sum = sum + count;
        }
        arr.push_back(sum);
        sum = 0;
        count = 0;
    }
    
    for(int i=0; i<arr.size(); i++)
    {
        cout << arr[i] << '\n';
    }
}