#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int k;
    int arr[8];
    
    for(int i=0; i<8; i++)
    {
        cin >> k;
        arr[i] = k;
    }
    int check = 0;
    
    for(int i=1; i<8; i++)
    {
       if(arr[i] > arr[i-1] && check != 2)
       {
           check = 1;
       }
       else if(arr[i] > arr[i-1] && check == 2)
       {
           check = 0;
           break;
       }
       else if(arr[i] < arr[i-1] && check != 1)
       {
           check = 2;
       }
       else if(arr[i] < arr[i-1] && check == 1)
       {
           check = 0;
           break;
       }
    }
    
    if(check == 0)
        cout << "mixed";
    else if(check == 1)
        cout << "ascending";
    else if(check == 2)
        cout << "descending";
}