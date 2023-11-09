#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int dem[26]={0};
	for(int i=0;i<s.size();i++){
		dem[int(s[i])-97]++;
	}
	int kt=1;
	for(int i=0;i<26;i++){
		if(dem[i]==0){
			cout<<char(i+97);
			kt=0;
			break;
		}
	    if(kt=1){
	    	cout<<"None";
		}	
	}
}