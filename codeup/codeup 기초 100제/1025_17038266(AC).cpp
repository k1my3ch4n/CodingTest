#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int x;
    int y = 1;
    vector<int> count;
    while(n>0)
    {
        x = n%10;
        count.push_back(x);
        
        n = n/10;
        y=y*10;
    }
    y = y/10;
    for(int i=count.size(); i>0; i--)
    {
        cout << "[" << count[i-1] * y << "]" << endl;
        y = y/10;
    }
}
