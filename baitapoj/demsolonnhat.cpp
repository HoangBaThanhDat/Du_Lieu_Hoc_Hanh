#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int m=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max=0;
	for(int i=0;i<n;i++){
		if(max<a[i])
		max=a[i];}
	for(int i=0;i<n;i++)
	{
		if(max==a[i])
		m++;
	}
	cout<<max<<" "<<m;;
}
