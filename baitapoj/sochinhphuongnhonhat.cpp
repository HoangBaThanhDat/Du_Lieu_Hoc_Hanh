#include<bits/stdc++.h>
 using namespace std;
 bool chinhphuong(int x){
 	int p;
 	p=sqrt(x);
 	if(x==p*p) return true;
 	else return false;
 }
 int main(){
 	long long n; cin>>n;
 	int a[n], min=1000000;
 	for(int i=1;i<=n;i++){
 		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		if(chinhphuong(a[i])){
			if(a[i]<min){
			min=a[i];
			}
		}
	} 
	cout<<min;
 }