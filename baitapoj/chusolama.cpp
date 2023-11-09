#include<bits/stdc++.h>
using namespace std;
int so(char &s){
		if (s=='I') return 1;
		else if(s=='V') return 5;
		else if(s=='X') return 10;
		else if(s=='L') return 50;
		else if(s=='C') return 100;
		else if(s=='D') return 500;
		else if(s=='M') return 1000;
}
int main(){
	string s;
	while(cin>>s){
		int sum=0;
		for(int i=0;i<s.size()-1;i++){
			if(so(s[i])>=so(s[i+1]))
			
			 sum+=so(s[i]);
			else sum-=so(s[i]);
		}
		sum+=so(s[s.size()-1]);
	    cout<<sum<<endl;
	}
}
