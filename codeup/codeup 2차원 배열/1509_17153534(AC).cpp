#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[11][10];
    int k;
    
    for(int i=0; i<11; i++)
    {
        for(int j=0; j<10; j++)
        {
            cin >> k;
            arr[i][j] = k;
        }
    }
    
    for(int i=0; i<10; i++)
    {
        if(arr[10][i] == 1)
        {
            for(int j=10; j>0; j--)
            {
                if(arr[j-1][i] < 0)
                {
                    cout << i + 1 << ' ' << "fall" << endl;
                    break;
                }
                else if(arr[j-1][i] > 0 )
                {
                    cout << i + 1 << ' ' << "crash" << endl;
                    break;
                }
                else if(j == 1 && arr[j-1][i] == 0)
                {
                    cout << i + 1 << ' ' << "safe" << endl;
                }
            }
        }
    }
}
