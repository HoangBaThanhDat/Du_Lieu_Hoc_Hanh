#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,year,dem=0; 
		cin>>n;
	for(int i=0;i<n;i++){
		cin>>year;
	int check = year % 19;
		if( check==0 || check==3 || check==6 || check==9 || check==11 || check==14 || check==17){
			dem++;
		}
	}
	cout<<dem;
}