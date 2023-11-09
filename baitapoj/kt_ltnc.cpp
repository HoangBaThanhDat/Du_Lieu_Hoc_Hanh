#include<bits/stdc++.h>
using namespace std;
struct matphangtoado{
	string x;
	string y;
};
void nhap(matphangtoado mptd[],int n){
	for(int i=0;i<n;i++){
		fflush(stdin);
		cout<<"hoanh do: ";getline(cin,mptd[i].x);
		cout<<"tung do: ";getline(cin,mptd[i].y);
	}
}
void xuat(matphangtoado mptd[],int n){
	for(int i=0;i<n;i++){
		cout<<"("<<mptd[i].x<<","<<mptd[i].y<<")"<<" ";
	}
}
int main(){
	int n;cin>>n;
	matphangtoado mptd[n];
	nhap(mptd,n);
	xuat(mptd,n);
	
}