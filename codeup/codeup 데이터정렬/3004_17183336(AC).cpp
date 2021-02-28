#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> arr1;
    vector<int> arr2;
    
    int k;
    
    for(int i = 0; i<n; i++)
    {
        cin >> k;
        arr1.push_back(k);
        arr2.push_back(k);
    }
    
    sort(arr1.begin(), arr1.end());
    int h = 0;
    for(int j = 0; j< n; j++)
    {
        for(int h = 0; h < n; h++)
        {
            if(arr2[j] == arr1[h])
            {
                cout << h << ' ';
                break;
            }
        }
    }
}

