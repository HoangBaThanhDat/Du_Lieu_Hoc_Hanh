#include<bits/stdc++.h>
using namespace  std;
bool snt(int x){
	for(int i=2;i<=sqrt(x);i++)
	     if(x%i==0)
	        return false;
	    return x>1;
	  }
int main()
{
	long long x,k,t,dem=0,a[100000];
	cin>>t;
	vector<long long> v;
	while(t--)
	{
		cin>>x>>k;
		v.clear();
		for(int i=1;i<=x;i++)
		{
			if(snt(i))
			{
				v.push_back(i);
			}
		}
		dem=0;
		for(int i=0;i<x;i++){
		a[i]=v[i]+v[i+1]+1;
		if(snt(a[i])&&a[i]<=x)
		{
			dem++;
		}}
	 if(dem>=k)
	 cout<<"Yes"<<"\n";
	 else
	 cout<<"No"<<"\n";
	}
}
