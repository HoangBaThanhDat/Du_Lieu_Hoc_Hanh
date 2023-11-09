#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;getline(cin,s);
	long tong=0;
	// tong cac so chua trong xau
	for(int i=0;i<s.size(); )
	{
		if(s[i]>='0' && s[i]<='9')
		{
			int t=s[i]-'0';
			int j=i+1;
			while(j<s.size() && s[j]>='0' && s[j]<='9')
			{
				t=t*10 + (int) s[j]-'0';
				j++;
			}
			tong+=t;
			i=j;
		}
		else
			i++;
	}
	cout<<tong;
	return 0;
}

