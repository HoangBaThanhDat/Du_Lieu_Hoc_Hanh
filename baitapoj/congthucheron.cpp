#include<bits/stdc++.h>
#include <math.h>
using namespace std;
float chuvi(int a, int b, int c) {
 return a + b + c;
}
    double dientich(int a , int b , int c){
	double p=chuvi(a,b,c)/2;
	return sqrt(p * (p-a) * (p-b) * (p-c)) ;
}

int main()
{
	float a,b,c;
	cin>>a>>b>>c;
	 if (a >= b + c || b >= a + c || c >= a + b)
     cout<<"No Solution";
   	  else{
	    cout<<fixed<<setprecision(6)<<dientich(a,b,c);
	   }
	   
     } 
	   
