#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int k1;
    string k2;
    
    vector<int> arr1;
    vector<int> arr2;
    vector<string> arr3;
    
    for(int i = 0; i<n; i++)
    {
        cin >> k1 >> k2;
        arr1.push_back(k1);
        arr2.push_back(k1);
        arr3.push_back(k2);
    }
    
    sort(arr2.begin(), arr2.end());
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr2[i] == arr1[j])
            {
                cout << arr1[j] << ' ' << arr3[j] << '\n';
                arr1[j] = 0;
                break;
            }
        }
    }
}
