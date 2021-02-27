#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    int arr[1002][1002];
    
    int x1,y1,x2,y2,u;
    for(int l = 0; l < k; l++)
    {
        cin >> x1 >> y1 >> x2 >> y2 >> u;
        arr[x1][y1] = arr[x1][y1] + u;
        arr[x2 + 1][y2 + 1] = arr[x2 + 1][y2 + 1] + u;
        
        arr[x1][y2 + 1] = arr[x1][y2 + 1] - u;
        arr[x2 + 1][y1] = arr[x2 + 1][y1] -u;
    }

    for(int i = 0; i< n; i++)
    {
        for(int j = 0; j< m; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }    
        
    int sum = 0;
    
    for(int j = 0; j< m; j++)
    {
        for(int i = 0; i< n; i++)
        {
            sum = sum + arr[i][j];
            arr[i][j] = sum;
        }
        sum = 0;
    }

    cout << endl; 
    
    for(int i = 0; i< n; i++)
    {
        for(int j = 0; j< m; j++)
        {
            sum = sum + arr[i][j];
            arr[i][j] = sum;
            cout << arr[i][j] << ' ';
        }
        sum = 0;
        cout << endl;
    }    
}
