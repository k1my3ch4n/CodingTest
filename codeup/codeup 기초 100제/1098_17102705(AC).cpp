#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a,b;
    
    cin >> a >> b;
    vector<vector<int>> c(a,vector<int>(b,0));
    
    int d;
    cin >> d;
    
    int i,j,k,l;
    
    for(int q=0; q<d; q++)
    {
        cin >> i >> j >> k >> l;
        
        if(j == 0)
        {
            for(int w=0; w<i; w++)
            {
                c[k-1][l+w-1] = 1;
            }
        }
        else if(j == 1)
        {
            for(int e=0; e<i; e++)
            {
                c[k+e-1][l-1] = 1;
            }
        }
    }
    
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            cout << c[i][j] << ' ';
        }
        cout << endl;
    }
}
