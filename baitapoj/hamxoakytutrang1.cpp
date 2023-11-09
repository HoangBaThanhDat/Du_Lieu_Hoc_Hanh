#include<bits/stdc++.h>
using namespace std;

char*leftTrim(char *st){
	int i=0;
	while(st[i]==32)
	    i++;
	st=&st[i];    
	return st;  
}
int main()
{
	char st[50];
	gets(st);
	cout<<leftTrim(st);
}