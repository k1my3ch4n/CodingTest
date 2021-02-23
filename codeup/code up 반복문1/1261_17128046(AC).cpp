#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a;
    vector<int> b;
    
    for(int i=0; i<10; i++)
    {
        cin >> a;
        if(a%5 == 0)
            b.push_back(a);
    }
    
    if(b.size() == 0)
        cout << "0";
    else
        cout << b[0];
}
