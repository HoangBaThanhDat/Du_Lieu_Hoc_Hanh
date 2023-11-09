#include <bits/stdc++.h>
#include <string.h>
using namespace std;
struct HocPhan{
	string mahp;
	string tenhp;
	int sotc;
};
void NhapDS(HocPhan DS[],int n)
{
	for(int i=0;i<n;i++)
	{
	   fflush(stdin); //xoa dau enter sau khi nhap n de nhap tiep
	   cout<<"Nhap Mahp: "; getline(cin,DS[i].mahp); 
	   cout<<"Nhap Tenhp: "; getline(cin,DS[i].tenhp); 
	   cout<<"Nhap sotc: "; cin>>DS[i].sotc; 
	}
}
void XuatDS(HocPhan DS[],int n){
  	for(int i=0;i<n;i++){	
	cout<<"ma hoc phan : "<<DS[i].mahp<<"\n";
	cout<<"nhap ten hoc phan : "<<DS[i].tenhp<<"\n";
	cout<<"nhap so tin chi : "<<DS[i].sotc<<"\n";
	}
}
void Tim_msv(HocPhan DS[],int n){
	for(int i=0;i<n;i++){
		if(DS[i].mahp=="ma"){
			cout<<DS[i].mahp<<"|"<<DS[i].tenhp<<"|"<<DS[i].sotc;
			break;	
		}
        else cout<<"khong ton tai";
        break;
	}
}
int main() {
	int n;
	cin>>n;
	HocPhan DS[n];
	NhapDS(DS,n);
//	XuatDS(DS,n);
	Tim_msv(DS,n);
}
