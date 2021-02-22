#include <iostream>
using namespace std;

int main()
{
    int a[6];
    int num;
    for(int i=0; i<6; i++)
    {
        cin >>  num;
        a[i] = num;
    }
    int bonus;
    cin >> bonus;
    
    int b[6];
    for(int j=0; j<6; j++)
    {
        cin >> num;
        b[j] = num;
    }
    
    int count = 0;
    
    for(int k = 0; k<6; k++)
    {
        for(int l = 0; l<6; l++)
        {
            if(a[k] == b[l])
            {
                count++;
                break;
            }
        }
    }
    
    if(count == 6)
        cout << "1";
    else
    {
        if(count == 5)
        {
            for(int r = 0; r<6; r++)
            {
                if(b[r] == bonus)
                {
                    count ++;
                    break;
                }
            }
            if(count == 6)
                cout << "2";
            else
                cout << "3";
        }
        else if(count == 4)
            cout << "4";
        else if(count == 3)
            cout << "5";
        else
            cout << "0";
    }
}
