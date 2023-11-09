#include<bits/stdc++.h>
using namespace std;

char*RightTrim(char *st){
	int i=strlen(st)-1;
	while(st[i]==32 && i>=0)
	    i--;
	st[i+1]='\0';   
	return st;  
}
int main()
{
	char st[50]; char *p;
//	char *st=(char*)malloc(50);
	gets(st);
    p=RightTrim(st);
	cout<<p;
	cout<<".End";
}