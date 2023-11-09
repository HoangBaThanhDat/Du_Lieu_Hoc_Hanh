#include<bits/stdc++.h>
using namespace std;
int main(){
	float a,b,c,x1,x2;
	 cin>>a>>b>>c;
	if (a!=0){
	double delta=b*b-4*a*c;
	if(delta<0){
		cout<<"No Solution";
	}
	else if(delta==0){
		 x1=x2=(double)-b/(2*a);
		cout<<fixed<<setprecision(4)<<x1;
	}
	else {
	    delta=sqrt(delta);
	     x1=(double)(-b+delta)/(2*a);
	     x2=(double)(-b-delta)/(2*a);
	    cout<<fixed<<setprecision(4)<<x1<<endl<<x2;
	}
   }
}

