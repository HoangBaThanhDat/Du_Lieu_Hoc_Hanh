#include<bits/stdc++.h>
using namespace std ;
int main()
{
	long long a,b,n; int dem=0,s=0;
	cin>>a>>b>>n;
	while(s<n){
		s+=a;
		if(s<n){
			s-=b;
		}
		dem++;
	}
	cout<<dem;
}