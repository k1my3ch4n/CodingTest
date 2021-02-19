#include <iostream>
using namespace std;

int main(){
    long long int a,b,c;
    float d;
    cin >> a >> b;
    c = a/b;
    cout << a+b << endl;
    cout << a-b << endl;
    cout << a*b << endl;
    cout << a/b << endl;
    cout << a-b*c << endl;
    d = (float)a/(float)b;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << d;
}
