#include <bits/stdc++.h>
using namespace std;
int main(){
	char a[10];
	cin>>a;
	int i=0,d=0;
	while(a[i]!='\0'){
		if(d==2)
			cout<<a[i];
		if(a[i]=='/')
			d++;
		i++;}
	}