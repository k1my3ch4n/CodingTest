#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    
    int arr[50][50];
    string c;
    int WB[8][8];
    int BW[8][8];
    int a;
    
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            a = i+j;
            if(a%2 == 0)
            {
                WB[i][j] = 0;
                BW[i][j] = 1;
            }
            else
            {
                WB[i][j] = 1;
                BW[i][j] = 0;
            }
        }
    }
    
    for(int i=0; i<n; i++)
    {
        cin >> c;
        for(int j=0; j<m; j++)
        {
            if(c[j] == 'B')
                arr[i][j] = 1;
            else if(c[j] == 'W')
                arr[i][j] = 0;
        }
    }
    
    int sumWB = 0;
    int sumBW = 0;
    int sum = 64;
    
    for(int i=0; i<n-7; i++)
    {
        for(int j=0; j<m-7; j++)
        {
            for(int k=0; k<8; k++)
            {
                for(int l=0; l < 8; l++)
                {
                    if(WB[k][l] == arr[i+k][j+l])
                    {
                        sumBW++;
                    }
                    else
                    {
                        sumWB++;
                    }
                }
            }
            
            if(sumBW < sum)
                sum = sumBW;
            if(sumWB < sum)
                sum = sumWB;
            
            sumBW = 0;
            sumWB = 0;
        }
    }
    
    cout << sum;
}