#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long giaithua=1;
	int n;
	cin>>n;
	for(long long i=n;i>0;i-=2)
	{
		giaithua=giaithua*i;
	}
	cout<< giaithua;
	return 0;
}


