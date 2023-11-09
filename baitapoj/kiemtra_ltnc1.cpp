#include<bits/stdc++.h>
using namespace std;
struct sinhvien{
	string   ten;
	string  truong;
	float diem;
};

int main(){
	int n; cin>>n;
	sinhvien sv[n];
	for(int i=0;i<n;i++){
		fflush(stdin);
			getline(cin,sv[i].ten);cout<<",";
			getline(cin,sv[i].truong);cout<<",";
			cin>>sv[i].diem;cout<<"\n";
	}
	for(int i=0;i<n;i++){
		if(sv[i].diem>=8){
			cout<<sv[i].ten<<","<<sv[i].truong<<","<<sv[i].diem<<endl;
		}
	}
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if (sv[i].diem<sv[j].diem){
				sinhvien temp = sv[i];
				sv[i] =sv[j];
				sv[j] = temp;
	       }
	cout<<"Danh sach sau khi sap xep: "<<"\n";
	for(int i=0; i<n; i++){
	 	cout<<sv[i].ten<<","<<sv[i].truong<<","<<sv[i].diem<<endl;
	}
}