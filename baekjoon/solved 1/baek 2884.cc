#include <iostream>
using namespace std;

int main(){
    int h,m;
    
    cin >> h >> m;
    
    if(m<45){
        h = h-1;
        if(h<0){
            h = h+24;
        }
        m = m+15;
        cout << h << ' ' << m;
        return 0;
    }
    
    else{
        m = m-45;
        cout << h << ' ' << m;
        return 0;
    }
}