#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    int arr[15][14];
    for(int i=0; i<14;i++)
    {
        arr[0][i] = i+1;
    }
    
    int sum = 0;
    
    for(int i=0; i<14; i++)
    {
        for(int j = 0; j<14; j++)
        {
            sum += arr[i][j];
            arr[i+1][j] = sum;
        }
        sum = 0;
    }
    
    int n,k;
    for(int i=0; i<t; i++)
    {
        cin >> n >> k;
        cout << arr[n][k-1] << endl;
    }
}