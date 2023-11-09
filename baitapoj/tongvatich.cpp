#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	long long a,d,e,h;
	cin>>m>>n;
	a=m/1000;
	d=m%10;
	e=n/1000;
	h=n%10;
	int sum1 = d+h;
	int sum2 = a*e;
	cout<<sum1<<endl;
	cout<<sum2<<endl;
}