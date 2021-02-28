#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int arr[1000];
    int k;
    for(int i = 0; i<n; i++)
    {
        cin >> k;
        arr[i] = k;
    }
    
    int a1;
    int count = 0;
    int check = 0;
    
    for(int j = 1; j<n; j++)
    {
    for(int i = 1 ; i<n; i++)
    {
        if(arr[i] < arr[i-1])
        {
            a1 = arr[i]; 
            arr[i] = arr[i-1];
            arr[i-1] = a1;
            count++;
        }
    }
        if(count == 0)
        {
            break;
        }
        else
        {
            check++;
            count = 0;
        }
    }
    cout << check;
}

