#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int  a,b,c,d,x; 
	cin>>a>>b>>c>>d;
	if((a<=1 && b<=1 && c<=1 && d<=1) && (a>=pow(10,9) || b>=pow(10,9) || c>=pow(10,9) || d>=pow(10,9))){
		cout<<endl;
	}else{
		 x = ((a % 100) * (b % 100) % 100) * (c % 100) % 100 * (d % 100) % 100;
	cout<<x;
	}
}