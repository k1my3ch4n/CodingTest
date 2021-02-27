#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[11][11] = {0};
    int k;
    
    for(int i=1; i<10; i++)
    {
        for(int j=1; j<10; j++)
        {
            cin >> k;
            arr[i][j] = k;
        }
    }
    
    int a,b;
    cin >> a >> b;
    int sum = 0;
    
    if(arr[a][b] == 1)
    {
        cout << "-1";
    }
    else
    {
        sum = sum + arr[a-1][b-1];
        sum = sum + arr[a-1][b];
        sum = sum + arr[a-1][b+1];
        sum = sum + arr[a][b-1];
        sum = sum + arr[a][b+1];
        sum = sum + arr[a+1][b-1];
        sum = sum + arr[a+1][b];
        sum = sum + arr[a+1][b+1];
        
        cout << sum;
    }
}
