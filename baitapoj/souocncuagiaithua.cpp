#include<bits/stdc++.h>
using namespace std;
const long long m=1e9+7;
bool checksnt(long long n){
	for(long long i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int powsum(long long n,long long j){
	long long tmp=j;
	long long total=0;
	while(j<=n){
		total+=n/j;
		j*=tmp;
	}
	return total+1;
}
int  main(){
	long long n; cin>>n;
	long long sum=1;
	for(int i=2;i<=n;++i){
		if(checksnt(i)){
			sum=(sum*powsum(n,i))%m;
		}
	}
	cout<<sum;
}
	