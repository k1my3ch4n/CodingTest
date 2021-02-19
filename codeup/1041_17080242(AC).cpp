#include <iostream>
using namespace std;

int main(){
    char a;
    cin >> a;
    int b=1;
    b = static_cast<int>(a) + 1;
    cout << static_cast<char>(b);
}
