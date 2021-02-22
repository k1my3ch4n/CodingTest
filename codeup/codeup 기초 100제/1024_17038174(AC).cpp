#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    
    cin >> n;
    
    for(int i=0; i< n.length(); i++)
    {
        cout << "'" << n[i] << "'" << endl;
    }
}
