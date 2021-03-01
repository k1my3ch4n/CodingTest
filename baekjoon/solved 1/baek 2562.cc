#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    vector<int> arr1;
    vector<int> arr2;
    for(int i =0; i<9; i++)
    {
        cin >> n;
        arr1.push_back(n);
        arr2.push_back(n);
    }
    
    sort(arr1.begin(),arr1.end());
    cout << arr1[8] << endl;
    for(int i=0; i<9; i++)
    {
        if(arr1[8] == arr2[i])
            cout << i+1;
    }
}
