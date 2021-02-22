#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a[10][10];
    int n;
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            cin >> n;
            a[i][j] = n;
        }
    }
    
    int b = 1, c = 1;
    
    while(true)
    {
        if(a[b][c] == 2)
        {
            a[b][c] = 9;
            break;
        }
        
        else if (a[b][c] == 0)
        {
            a[b][c] = 9;
            c++;
        }
        else if (a[b][c] == 1)
        {
            b++;
            c--;
        }
        else
        {
            break;
        }
    }
    
    
    
    for(int d=0; d<10; d++)
        {
            for(int f=0; f<10; f++)
            {
                cout << a[d][f] << ' ';
            }
            cout << endl;
        }
}
