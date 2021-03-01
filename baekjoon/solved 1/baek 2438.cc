#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 1;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(count > j)
            {
                cout << "*";
            }
            else
                break;
        }
        cout << endl;
        count = i+2;
    }
}
