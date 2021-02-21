#include <iostream>
#include <vector>
using namespace std;

int main()
{
       vector<vector<int>> a(19, vector<int>(19,0));
       int c;
       
       for(int i=0; i<19; i++)
       {
           for(int j=0; j<19; j++)
           {
               cin >> c;
               a[i][j] = c;
           }
       }
       
       int n;
       
       cin >> n;
       
       int b,w;
       
       for(int k=0; k<n; k++)
       {
            cin >> b >> w;    
            
            for(int q=0; q<19; q++)
            {
                if(a[b-1][q] == 1)
                    a[b-1][q] = 0;
                else if(a[b-1][q] == 0)
                    a[b-1][q] = 1;
                    
                if(a[q][w-1] == 1)
                    a[q][w-1] = 0;
                else if(a[q][w-1] == 0)
                    a[q][w-1] = 1;
            }
       }
       
       for(int i=0; i<19; i++)
       {
           for(int j=0; j<19; j++)
           {
               cout << a[i][j] << ' ';
           }
           cout << endl;
       }
}
