#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[10][10];
    int answer[10][10] = { 0 };
    
    int k;
    
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            cin >> k;
            arr[i][j] = k;
        }
    }
    
    int n;  //물풍선의 세기
    int check1 = 0,check2 = 0,check3 = 0,check4 = 0; 
    
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(arr[i][j] == 0 && answer[i][j] != -2)
                answer[i][j] = 0;
            else if(arr[i][j] == -1)
                answer[i][j] = -1;
            else if(arr[i][j] > 0)
            {
                n = arr[i][j];
                answer[i][j] = -2;
                
                for(int l=1; l<n+1; l++)
                {
                    if(arr[i][j+l] == -1)
                    {
                        check1 = 1;
                    }
                    if(arr[i+l][j] == -1)
                    {
                        check2 = 1;
                    }
                    if(arr[i][j-l] == -1)
                    {
                        check3 = 1;
                    }
                    if(arr[i-l][j] == -1)
                    {
                        check4 = 1;
                    }
                    
                    if(check1 == 0)
                    {
                        if(j+l<10)
                        answer[i][j+l] = -2;
                    }
                    if(check2 == 0)
                    {
                        if(i+l<10)
                        answer[i+l][j] = -2;
                    }
                    if(check3 == 0)
                    {
                        if(j-l>=0)
                        answer[i][j-l] = -2;
                    }
                    if(check4 == 0)
                    {
                        if(i-l>=0)
                        answer[i-l][j] = -2;
                    }
                }
                
                check1 = 0;
                check2 = 0;
                check3 = 0;
                check4 = 0;
            }
        }
    }
    
    int p;
    cin >> p;
    
    int p1, p2;
    
    int sur[8];
    for(int i=0; i<p; i++)
    {
        cin >> p1 >> p2;
        
        if(answer[p1-1][p2-1] == 0)
        {
            answer[p1-1][p2-1] = i+1;
            sur[i] = 1;
        }
        else
            sur[i] = 0;
    }
    
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            cout << answer[i][j] << ' ';
        }
        cout << endl;
    }
        
    cout << "Character Information" << endl;
    
    for(int i=0; i<p; i++)
    {
        if(sur[i] == 0)
            cout << "player "<< i + 1 << " dead" << endl;
        else
            cout << "player "<< i + 1 << " survive" << endl;
    }
}


