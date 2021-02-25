#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[27][27] = { 0 };
    int answer[25][25];
    int k;
    
    for(int i=1; i<26; i++)
    {
        for(int j=1; j<26; j++)
        {
            cin >> k;
            arr[i][j] = k;
        }
    }
    
    int sum = 0;
    
    for(int i=1; i<26; i++)
    {
        for(int j = 1; j<26; j++)
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
                if(sum == 3)
                    answer[i-1][j-1] = 1;
                else    
                    answer[i-1][j-1] = 0;
            }
            else if(arr[i][j] == 1)
            {
                if(sum >= 4 || sum <= 1)
                {
                    answer[i-1][j-1] = 0;
                }
                else
                    answer[i-1][j-1] = 1;
            }
            
            sum = 0;
        }
    }
    
    for(int i=0; i<25; i++)
    {
        for(int j=0; j<25; j++)
        {
            cout << answer[i][j] << ' ';
        }
        cout << endl;
    }
}
