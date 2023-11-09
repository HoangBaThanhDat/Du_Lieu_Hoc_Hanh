#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[200];char p[20];
	gets(s);
	int dem=0;
	cin>>p;
	for(int i=0;i<strlen(s);i++){
		if(s[i] == *p)
	   		dem++;	
	}
	cout<<dem;
}