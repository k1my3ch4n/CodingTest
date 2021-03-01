#include <iostream>
using namespace std;

int main(){
    int x,y,z;
    cin >> x;
    
    y = x/400;
    z = y*400;
    
    if(x == z){
        cout << "1";
        return 0;
    }
    
    y = x/100;
    z = y*100;
    
    if(x == z){
        cout << "0";
        return 0;
    }
    
    y = x/4;
    z = y*4;
    
    if(x == z){
        cout << "1";
        return 0;
    }
    else{
        cout << "0";
        return 0;
    }
}