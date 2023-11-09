#include<bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
	double s,p,a,b,c;
	cin>>a>>b>>c;
	if(a+b>c && a+c>b && b+c>a){
		p=(a+b+c)/2;
		s=sqrt(p * (p-a) * (p-b) * (p-c));
		cout<<fixed<<setprecision(6)<<s;
    }
   	else
	   cout<<"No Solution";
	   return 0;
}
