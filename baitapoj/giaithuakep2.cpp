#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n, kqua=1;
	cin>>n;
	if(n%2!=0){
	    for(int i=1;i<=n;i+=2)
		    kqua*=i;
			cout<<kqua;
	}
	else if(n%2==0){
	    for(int i=2;i<=n;i+=2)
		    kqua*=i;
			cout<<kqua;	
    }
}
