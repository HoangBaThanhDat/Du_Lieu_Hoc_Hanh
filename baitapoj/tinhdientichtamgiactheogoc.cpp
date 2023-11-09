#include<bits/stdc++.h>
using namespace std;
int main(){
	double a,b,S,c,pi,radian;
	cin>>a>>b>>c;
	pi=3.14159;
	radian = c * pi /180; 
	S=0.5*a*b*sin(radian);
	cout<<fixed<<setprecision(2)<<S;
	return 0;
}