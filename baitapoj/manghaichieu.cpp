#include<bits/stdc++.h>
using namespace std;
void nhapmatran( int a[100][100],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
}
void xuatmatran( int a[100][100],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j];                   
		}
	}
}
//long tinhtong(int a[100][100],int m,int n){
//	long s=0;
//	for(int i=0;i<m;i++)
//		for(int j=0;j<n;j++)
//			s+=a[i][j];
//	return s;
//}
//long tinhtongchan(int a[100][100],int m,int n){
//	long s=0;
//	for(int i=0;i<m;i++)
//		for(int j=0;j<n;j++)
//		if(a[i][j]%2==0)
//			s+=a[i][j];
//	return s;
//}
//int ktnt(int n)
//{
//    for(int i=2;i<=sqrt(n);i++)
//        if(n%i==0) return 0;
//    return n>1;
//}
//long tong_nt(int a[100][100],int n,int m)
//{
//    long s=0;
//    for(int i=0;i<n;i++)
//        for(int j=0;j<m;j++)
//            if(ktnt(a[i][j])){
//                s+=a[i][j];
//            }
//    return s;
//}
int main()
{
	int m,n;
	cin>>m>>n;
	int a[100][100];
	nhapmatran(a,m,n);
	xuatmatran(a,m,n);
//	cout<<"\n";
//	cout<<"Tinh Tong :"<<tinhtong(a,m,n)<<"\n";
//	cout<<"Tinh Tong So Chan :"<<tinhtongchan(a,m,n)<<"\n";
//	cout<<"Tong So Nguyen To :"<<tong_nt(a,m,n);
}
