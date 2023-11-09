#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b;cin>>a>>b;
	if(a<=b){
		if(a>0&&b>0) cout<<"Positive";
		else if(a<0&&b>0) cout<<"Zero";
		else
		{
		int tich=1;	tich=(b-a+1);
		if(tich%2==0) cout<<"Positive";
		else cout<<"Negative";
		}
	}
	return 0;
}