#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int a[1001];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,greater<int>());
	for(int i=0;i<n/10;i++){
		cout<<a[i];
	}
	return 0;
}