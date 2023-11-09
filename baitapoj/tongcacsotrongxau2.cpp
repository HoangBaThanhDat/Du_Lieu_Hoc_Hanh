#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    long long so=0,tong=0;
    for(int i=0;i<=str.length();i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            so=so*10+(str[i]-'0');
        }
        else 
        {
            tong+=so;
            so=0;
        }
    }
    cout<<tong;
    return 0;
}
