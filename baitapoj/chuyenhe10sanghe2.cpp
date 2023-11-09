#include<bits/stdc++.h>
using namespace std ;
int main()
{
	long long n,S=0,dem=1;
	cin>>n;
	while(n!=0)
	{
		S+=n%2*dem;
		dem*=10;
		n/=2;
	}
	cout<<S;
}
