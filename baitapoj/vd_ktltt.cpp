#include<bits/stdc++.h>
using namespace std;
struct sinhvien{
//	char masv[100];
    char hoten[100];
    char lop[100];
    int diemtbc;
};
int main(){
	sinhvien sv[100];
	int n;cin>>n;
	for(int i=0;i<n;i++){
		fflush(stdin);
	//	cout<<"nhap msv: ";         gets(sv[i].masv);
		cout<<"nhap hoten: ";       gets(sv[i].hoten);
		cout<<"nhap lop: ";         gets(sv[i].lop);
		cout<<"nhap diem tbc: ";    cin>>(sv[i].diemtbc);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(sv[i].diemtbc<sv[j].diemtbc){
				sinhvien temp;
		        temp=sv[i];
				sv[i]=sv[j];
				sv[j]=temp;
			}
		}
	 cout<</*sv[i].masv<<"|"<<*/sv[i].hoten<<"|"<<sv[i].lop<<"|"<<sv[i].diemtbc<<endl;	
	}
}