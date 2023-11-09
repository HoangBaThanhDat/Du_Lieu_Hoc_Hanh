#include<bits/stdc++.h>
using namespace std;
bool snt(int n){
	if(n<2)
		return false;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
		return false;
	return true;	
}
int main()
{
	string s;
	getline(cin,s);
	    s=s+' ';
	int sum=0;
	for(int i=0;i<s.size();i++){
		if(s[i]>='0'&&s[i]<='9'){
			sum=sum*10+s[i]-'0';
		}
		   else {
		   	  if(sum!=0&&snt(sum))
		   	  cout<<sum<<"\n";
		   	  sum=0;
		   }
	}
}