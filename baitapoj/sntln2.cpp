#include<bits/stdc++.h>

using namespace std;

bool snt(long long n){
	for(int i=2;i<=sqrt(n);i++)
	     if(n%i==0)
	        return 0;
	return 1;
	  }
	  
int sntln(int a[],int n)
{   int max=0;
	for(int i=1;i<n;i++)
	{
		if( snt(a[i])==true)
		{
			if (max<a[i])
			{	
			max=a[i];
			}
		}
	}
	cout<<max; 
}
int main() {
	int n,a[1001];
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	    cin>>a[i];	
	}
	sntln(a,n);	
}
