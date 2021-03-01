#include <iostream>
#include <string>
using namespace std;

int main()
{
    int sum = 1;
    int n;
    int arr[10] = {0};
    for(int i=0; i<3; i++)
    {
        cin >> n;
        sum = sum * n;
    }
    
    int k;
    while(sum > 0)
    {
        k = sum%10;
        arr[k]++;
        sum = sum/10;
    }
    
    for(int i=0; i<10; i++)
    {
        cout << arr[i] << endl;
    }
}
