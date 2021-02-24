#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int k,s;
    k = n/2 + 1;
    s = n;
    
    for(int i=0;i<k;i++)
    {
        int a,b;
        a = (s - 2*i)/2;
        b = s - 2*a;
        for(int j = 0 ;j <a ; j++)
        {
            cout << ' ';
        }
        for(int l = 0; l<b; l++)
        {
            cout << '*';
        }
        cout << endl;
    }
}
