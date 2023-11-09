#include<bits/stdc++.h>
using namespace std;
struct sinhvien{
	string hoten;
	string ngaysinh;
	string gt;
	float toan;
	float ly;
	float hoa;
	float dtb;
};
void nhap(sinhvien sv[],int n){
	for(int i=0;i<n;i++){
		fflush(stdin);
		cout<<"nhap hoten :";
		getline(cin,sv[i].hoten);fflush(stdin);cout<<endl;
		cout<<"nhap ngaysinh :";
		getline(cin,sv[i].ngaysinh);fflush(stdin);cout<<endl;
		cout<<"nhap gt :";
		getline(cin,sv[i].gt);fflush(stdin);cout<<endl;
		cout<<"nhap toan :";
		cin>>(cin,sv[i].toan);cout<<endl;
		cout<<"nhap ly :";
		cin>>(cin,sv[i].ly);cout<<endl;
		cout<<"nhap hoa :";
		cin>>(cin,sv[i].hoa);cout<<endl;			
	}
}
void xuat(sinhvien sv[],int n){
	for(int i=0;i<n;i++){
		cout<<sv[i].hoten<<" : ";
		cout<<sv[i].ngaysinh<<"  ";
		cout<<sv[i].gt<<"  ";
		cout<<sv[i].toan<<"  ";
		cout<<sv[i].ly<<"  ";
		cout<<sv[i].hoa<<"  ";
		cout<<sv[i].dtb<<"\n";
	}
}
void xapxep(sinhvien sv[],int n){
	for(int i=0;i<n-1;i++){
		for( int j=i+1;j<n;j++){
			if(sv[i].hoten>sv[j].hoten ){
				swap(sv[i],sv[j]);
			}
		}
	}
	
}

void diemtb(sinhvien sv[],int n){
	for(int i=0;i<n;i++){
		sv[i].dtb=(sv[i].toan+sv[i].ly+sv[i].hoa)/3;
	}
}
int main(){
	int n;cin>>n;
	sinhvien sv[n];
	nhap(sv,n);
	xapxep(sv,n);
	diemtb(sv,n);
	xuat(sv,n);
}