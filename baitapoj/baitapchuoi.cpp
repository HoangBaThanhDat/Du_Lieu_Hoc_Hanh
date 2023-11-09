#include<bits/stdc++.h>
using namespace std;
int main()
{
	char  *s[100];
	gets(*s);
	char p;int dem=0,n;
	cin>>p;
	n=strlen(*s);
	for(int i=0;i<n;i++){
		if(s[i]==p)
	   		dem++;	
	}
	cout<<dem;
}