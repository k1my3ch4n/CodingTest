#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    
    int check = 0;
    int count;
    count = n * m;
    
    int arr[100][100] = { 0 };
    
    if(n%2 == 0)
        check = 0;
    else
        check = 1;
        
    if(m == 1)
    {
        for(int r=0; r<n; r++)
        {
            cout << count << endl;
            count--;
        }
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(check == 1)
            {
                for(int j=0; j<m; j++)
                {
                    arr[i][j] = count;
                    count--;
                }
                check = 0;
            }
            else if(check == 0)
            {
                for(int j=m-1; j>=0; j--)
                {
                    arr[i][j] = count;
                    count--;
                }
                check = 1;
            }
        }
        
        for(int k=0; k<n; k++)
        {
            for(int s=0; s<m; s++)
            {
                cout << arr[k][s] << ' ';
            }
            cout << endl;
        }
    }
}
