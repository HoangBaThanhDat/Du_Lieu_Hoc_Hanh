#include<iostream>
#include<string.h>
using namespace std;

struct sinhvien{
	char masv[10];
	char hoten[50];
	char lop[10];
	float tbc;
};

int main(){
	int n = 3;
	sinhvien *ds[n];
	for(int i=0; i<n; i++){
		ds[i] = new sinhvien();
		fflush(stdin);
		cout<<"masv: "; gets(ds[i]->masv);
		cout<<"hoten: "; gets(ds[i]->hoten);
		cout<<"lop: "; gets(ds[i]->lop);
		cout<<"tbc: "; cin>>ds[i]->tbc;	
	}
	
	for(int i=0; i<n; i++){
		cout<<"masv: "; cout<<ds[i]->masv;
		cout<<"hoten: "; cout<<ds[i]->hoten;
		cout<<"lop: "; cout<<ds[i]->lop;
		cout<<"tbc: "; cout<<ds[i]->tbc <<endl;	
	}
	
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if (ds[i]->tbc<ds[j]->tbc){
				sinhvien temp = *ds[i];
				*ds[i] = *ds[j];
				*ds[j] = temp;
			}
	
	cout<<"Danh sach sau khi sap xep: "<<"\n";
	for(int i=0; i<n; i++){
		cout<<"masv: "; cout<<ds[i]->masv;
		cout<<"hoten: "; cout<<ds[i]->hoten;
		cout<<"lop: "; cout<<ds[i]->lop;
		cout<<"tbc: "; cout<<ds[i]->tbc <<endl;	
	}
	return 0;
}