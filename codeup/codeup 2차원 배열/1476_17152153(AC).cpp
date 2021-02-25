#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    
    int arr[100][100];
    
    int count;
    count = n*m;
    int check = n + m - 1;
    int score = 1;
    
    int a, b;
    
    for(int i=0; i < check; i++)
    {
        a = i; b = 0;
        for(int j = 0; j < check ; j++)
        {
            if(a < 0)
            {
                break;
            }
            else if(a >= n)
            {
                a = a - 1;
                b = b + 1;
            }
            else if(b >= m)
            {
                a = a - 1;
                b = b + 1;
            }
            else
            {
                arr[a][b] = score;
                score++;
                a = a - 1;
                b = b + 1;
            }
        }
    }
    
    for(int i = 0; i<n; i++ )
    {
        for(int j = 0; j<m ; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}
