#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
	long dem=0,n,s,j;
	cin>>n;
	for(int i=1;i<=n;i++){
		j=i;
		s=0;
		while (j!=0){
		s+=j%10;
		j/=10;
		}
		if(s%10==9)
			dem++;
	}
	cout<<dem;
}
