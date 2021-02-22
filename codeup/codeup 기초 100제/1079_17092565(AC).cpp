#include <iostream>
using namespace std;

int main()
{
    char c;
    
    while(true)
    {
        cin >> c;
        
        cout << c << endl;
        if(c == 'q')
            break;
    }
}
