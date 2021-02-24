#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> a;
    int b;
    
    for(int i=0; i<n; i++)
    {
        cin >> b;
        a.push_back(b);
    }
    
    int count = 0;
    
    for(int j=0; j<n; j++)
    {
        cout << j+1 << ": ";
         
        for(int k=0; k<n; k++)
        {
            if(count != k)
            {
                if(a[j] < a[k])
                {
                    cout << "< ";
                }
                else if(a[j] > a[k])
                {
                    cout << "> ";
                }
                else if(a[j] == a[k])
                {
                    cout << "= ";
                }
            }
        }
        count++;
        cout << endl;
    }
}

