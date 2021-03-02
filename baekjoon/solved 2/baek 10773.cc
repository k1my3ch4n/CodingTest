#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> arr;
    int count = -1;
    
    int k;
    for(int i=0 ; i<n; i++)
    {
        cin >> k;
        if(i == 0 && k == 0)
        {
              count = -1;  
        }
        else
        {
            if(k != 0)
            {
                arr.push_back(k);
                count++;
            }
            else
            {
                arr.pop_back();
                count--;
            }
        }
    }
    int sum = 0;
    if(arr.size() == 0)
        cout << "0";
    else
    {
        for(int i=0; i<arr.size(); i++)
        {    
            sum = sum + arr[i];
        }
        cout << sum;
    }
}
