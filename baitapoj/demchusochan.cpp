#include<bits/stdc++.h>
using namespace std;
 int main ()
 {
 long long n,dem =0,s;
 cin>>n;
 while (n!=0) 
{
	s=n%10;
	if (s%2!=0)
	dem++;
	n/=10;
}
	cout<<dem;
}
