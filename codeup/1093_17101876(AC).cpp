#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> count(23);
    int c;
    
    for(int i=0; i<n; i++)
    {
        cin >> c;
        count[c-1] = count[c-1] + 1;
    }
    for(int j=0; j<23; j++)
    {
        cout << count[j] << ' ';
    }
}
