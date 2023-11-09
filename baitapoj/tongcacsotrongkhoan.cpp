#include<bits/stdc++.h>
using namespace std;
int check(int num){
	int sum=0;
	while(num>0){
		sum+=num % 10;
		num/=10;
	}
	return sum;
}
int main(){
	int n,a,b; cin>>n; cout<<endl; cin>>a>>b;
	int tong=0;
	for(int i=1;i<=n;i++){
		if(check(i) >=a && check(i) <=b){
			tong+=i;
		}
	}
	cout<<tong;
}