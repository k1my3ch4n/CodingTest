#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<vector<int>> a(19, vector<int>(19,0));
    int b,w;
    for(int i=0; i<n; i++)
    {
        cin >> b >> w;
        a[b-1][w-1] = 1;
    }
    
    for(int j=0; j<19; j++)
        {
            for(int k=0; k<19; k++)
            {
                cout<< a[j][k] << ' ';
            }
            cout << endl;
        }
}
