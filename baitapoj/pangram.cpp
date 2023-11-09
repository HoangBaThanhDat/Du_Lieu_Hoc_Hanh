#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);	
		for(int i=0;i<s.size();i++)
		{
		    s[i]=tolower(s[i]);
			if(s[i]>'a'&&s[i]<'z'){
			    cout<<"yes";	break;	
			}
			else
			if(s[i]>'a'&&s[i]<'z')
			    cout<<"No";	break;	
		}
}