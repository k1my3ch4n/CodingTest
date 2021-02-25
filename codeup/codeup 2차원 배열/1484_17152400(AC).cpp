#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, m ;
    cin >> n >> m;
    
    int count;
    int check = 1;
    count = n * m;
    
    int arr[100][100] = { 0 } ;
    
    int a = 0, b = 0;
    for(int i=0 ; i< count; i++)
    {
        if(check == 1)
        {
            arr[a][b] = i + 1;
            if(arr[a][b + 1] == 0 && b + 1 < m)
            {
                b = b + 1;
            }
            else
            {
                check++;
                a = a + 1;
            }
        }
        else if(check == 2)
        {
            arr[a][b] = i + 1 ;
            if(arr[a + 1][b] == 0 && a + 1 < n)
            {
                a = a + 1;
            }
            else
            {
                check++ ;
                b = b - 1;
            }
        }
        else if(check == 3)
        {
            arr[a][b] = i + 1;
            if(arr[a][b - 1] == 0 && b - 1 >= 0)
            {
                b = b - 1;
            }
            else
            {
                check++ ;
                a = a - 1;
            }
        }
        else if(check == 4)
        {
            arr[a][b] = i + 1;
            if(arr[a - 1][b] == 0)
            {
                a = a - 1;
            }
            else
            {
                check = 1;
                b = b + 1;
            }
        }
    }
    
    for(int i = 0; i<n ; i++)
    {
        for(int j = 0; j< m; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}
