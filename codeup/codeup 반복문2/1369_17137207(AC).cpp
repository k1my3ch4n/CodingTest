#include <iostream>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    
    if(n<3 || k == 1)
    {
        for(int g=0; g<n; g++)
        {
            for(int f = 0; f<n; f++)
            {
                cout <<"*";
            }
            cout<<endl;
        }
    }
    else
    {
    for(int i=0; i<n; i++)
    {
        cout << "*";
    }
    cout << endl;
    
    int a[100];
    
    for(int j = 0; j<n; j++)
    {
        a[j] = j%k;
    }
    
    for(int l=0; l<n-2; l++)
    {
        cout << "*";
        for(int m=2; m < n; m++)
        {
            if(a[m] == k-1)
            {
                cout << "*";
            }
            else
            {
                cout << ' ';
            }
            
            a[m] = a[m] + 1;
            
            if(a[m] == k)
                a[m] = 0;
        }
        cout << "*";
        cout << endl;
    }
    
    for(int i=0; i<n; i++)
    {
        cout << "*";
    }
    }
}
