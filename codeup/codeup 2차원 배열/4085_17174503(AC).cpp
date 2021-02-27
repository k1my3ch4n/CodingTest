#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    int arr[100][100] = { 0 };
    int m,n,x,y;
    cin >> m >> n >> x >> y;
    
    int k;
    
    for(int i = 0; i<n; i++)
    {
        for(int j = 0 ; j<m ; j++)
        {
            cin >> k;
            arr[i][j] = k;
        }
    }
    int sum = 0;
    int count = 0;
    
    for(int i = 0; i < n - x + 1; i++)
    {
        for(int j = 0; j< m - y + 1; j++)
        {
            for(int s = 0; s < y; s++)
            {
                for(int l = 0; l < x; l++)
                {
                    sum = sum + arr[i+s][j+l];
                }
            }
            if(sum > count)
                count = sum;
            
            sum = 0;
        }
    }
    
    cout << count;
}

