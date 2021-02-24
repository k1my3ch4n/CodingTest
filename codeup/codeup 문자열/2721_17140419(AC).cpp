#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;
    
    int len1 = s1.length();
    int len2 = s2.length();
    int len3 = s3.length();
    
    if(s1[len1-1] == s2[0] && s2[len2-1] == s3[0] && s3[len3-1] == s1[0])
        cout << "good";
    else
        cout << "bad";
}
