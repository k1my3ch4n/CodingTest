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
    vector<int> arr2;
    vector<int> arr3;
    
    string a;
    int b;
    
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        arr1.push_back(a);
        arr2.push_back(b);
        arr3.push_back(b);
    }
    
    sort(arr3.begin(), arr3.end());
    
    for(int j=0; j < arr2.size(); j++)
    {
        if(arr3[n-3] == arr2[j])
            cout << arr1[j];
    }
    
    
    
}
