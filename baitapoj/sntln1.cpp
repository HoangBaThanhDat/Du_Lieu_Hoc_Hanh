#include <bits/stdc++.h>
using namespace std;
bool snt(long long n) {
for(int i = 2 ;i <= sqrt(n);i++){
	if(n%i==0){
		return 0;
	}
}return 1;	
}		
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n ; i++)
	cin>>a[i];
	
int max = 0;
for (int i = 1; i<n;i++){
	if(snt(a[i]) == true ){
		if ( max<a[i] ){
max = a[i];
		}

	}
}
cout<<max;
	return 0;
}
