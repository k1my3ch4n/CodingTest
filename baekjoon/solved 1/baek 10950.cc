#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    int x,y;
    int a[t-1] = {};
    for(int i = 0; i<t; i++){
        cin >> x >> y;
        a[i] = x+y;
    }
    for(int i=0; i<t; i++){
        cout << a[i] << endl;
    }
}