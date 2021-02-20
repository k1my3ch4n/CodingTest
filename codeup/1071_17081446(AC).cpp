#include <iostream>
using namespace std;

int main()
{
    int n;
    restart:
    
    cin >> n;

    if(n!= 0){
        cout << n << endl;
        goto restart;
    }
}


