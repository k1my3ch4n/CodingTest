#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[172][172] = { 0 };
    int answer[170][170];
    
    int a,b;
    cin >> a >> b;
    
    int c,d,e;
    cin >> c >> d >> e;
    
    int k;
    
    for(int i=1; i < a + 1; i++)
    {
        for(int j=1; j < b + 1; j++)
        {
            cin >> k;
            arr[i][j] = k;
        }
    }
    
    int sum = 0;
    
    int r;
    cin >> r;
    
    for(int s = 0; s<r; s++)
    {
    for(int i=1; i< a + 1; i++)
    {
        for(int j = 1; j< b + 1; j++)
        {
            sum = sum + arr[i - 1][j - 1];
            sum = sum + arr[i - 1][j];
            sum = sum + arr[i - 1][j + 1];
            sum = sum + arr[i][j - 1];
            sum = sum + arr[i][j + 1];
            sum = sum + arr[i + 1][j - 1];
            sum = sum + arr[i + 1][j];
            sum = sum + arr[i + 1][j + 1];
            
            if(arr[i][j] == 0)
            {
                if(sum == c)
                    answer[i-1][j-1] = 1;
                else    
                    answer[i-1][j-1] = 0;
            }
            else if(arr[i][j] == 1)
            {
                if(sum >= e || sum < d)
                {
                    answer[i-1][j-1] = 0;
                }
                else
                    answer[i-1][j-1] = 1;
            }
            
            sum = 0;
        }
    }
    for(int f = 0; f< a; f++)
    {
        for(int g = 0; g < b; g++)
        {
            arr[f + 1][g + 1] = answer[f][g];
        }
    }
    }
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            cout << answer[i][j] << ' ';
        }
        cout << endl;
    }
}

