#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    cin >> a;
    
    int len = a.length();
    
    string b;
    
    int k = -1;
    int sum = 0;
    int count = 0;
    int check = 0;
    
    for(int i=0; i<len; i++)
    {
        if(a[i] == '+')
        {
            b = a.substr(k+1, i-k-1);
            k = i;
            count = stoi(b);
                
            if(check == 1 || check == 0)
            {
                sum = sum + count;
            }
            else if(check == 2)
            {
                sum = sum - count;
            }
            else if(check == 3)
            {
                sum = sum * count;
            }
            else if(check == 4)
            {
                sum = sum / count;
            }
            check = 1;
        }
            
        else if(a[i] == '-')
        {
            b = a.substr(k+1, i-k-1);
            k = i;
            count = stoi(b);
                
            if(check == 1 || check == 0)
            {
                sum = sum + count;
            }
            else if(check == 2)
            {
                sum = sum - count;
            }
            else if(check == 3)
            {
                sum = sum * count;
            }
            else if(check == 4)
            {
                sum = sum / count;
            }

            check = 2;
        }
        else if(a[i] == '*')
        {
            b = a.substr(k+1, i-k-1);
            k = i;
            count = stoi(b);
            
            if(check == 1 || check == 0)
            {
                sum = sum + count;
            }
            else if(check == 2)
            {
                sum = sum - count;
            }
            else if(check == 3)
            {
                sum = sum * count;
            }
            else if(check == 4)
            {
                sum = sum / count;
            }
                    
            check = 3;
        }
        else if(a[i] == '/')
        {
            b = a.substr(k+1, i-k-1);
            k = i;
            count = stoi(b);
 
                 
            if(check == 1 || check == 0)
            {
                sum = sum + count;
            }
            else if(check == 2)
            {
                sum = sum - count;
            }
            else if(check == 3)
            {
                sum = sum * count;
            }
            else if(check == 4)
            {
                sum = sum / count;
            }

            check = 4;
        }
        else if(a[i] == '=')
        {
            b = a.substr(k+1, i-k-1);
            k = i;
            count = stoi(b);
 
            if(check == 1 || check == 0)
            {
                sum = sum + count;
            }
            else if(check == 2)
            {
                sum = sum - count;
            }
            else if(check == 3)
            {
                sum = sum * count;
            }
            else if(check == 4)
            {
                sum = sum / count;
            }

            cout << sum;
            break;
        }
    }    
}

