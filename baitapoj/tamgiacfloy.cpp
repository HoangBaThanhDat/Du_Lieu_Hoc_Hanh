#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;i++){
			   if(i%2==0&&j%2!=0||i%2!=0&&j%2==0){
				     cout<<0;
			    }
			        else{
			           cout<<1;
			       }
		}
	cout<<"\n";
	}
}