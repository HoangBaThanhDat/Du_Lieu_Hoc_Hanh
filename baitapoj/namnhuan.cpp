#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,n;
	cin>>N;
	for(int k=0;k<N;k++){
		cin>>n;
	if(( (n%4==0) && (n%100!=0) ) ||(n%400==0))
 	cout<<"leap year"<<endl;
 	 else
 	  cout<<"none"<<endl;
	}
	
}
