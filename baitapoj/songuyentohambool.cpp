4#include<bits/stdc++.h>

using namespace std;

bool snt(int x){
	for(int i=2;i<=sqrt(x);i++)
	     if(x%i==0)
	        return false;
	    return x>1;
	  }
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
	if(snt(i)==true)
	cout<<i<<" ";}	
}
