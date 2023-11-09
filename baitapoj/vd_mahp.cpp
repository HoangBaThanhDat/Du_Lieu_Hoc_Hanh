#include<bits/stdc++.h>
using namespace std;
struct hocphan{
	char mahp[10];
	char tenhp[50];
	int sotc;
};
void nhap(hocphan hp[],int n){
	for(int i=0;i<n;i++){
		fflush(stdin);
		int ok;
		do{
			 ok=0;
			cout<<"nhap mahp : ";gets(hp[i].mahp);
			for(int j=0;j<i;j++){
			    if(strcmp(hp[j].mahp,hp[i].mahp)==0){
				    ok=1;	break;
			   }
		   }
		}while(ok==1);
			cout<<"nhap tenhp : ";gets(hp[i].tenhp);
			cout<<"nhap sotc : ";cin>>hp[i].sotc;
	}
}
void xuat(hocphan hp[],int n){
	for(int i=0;i<n;i++){
	cout<<hp[i].mahp<<"|"<<hp[i].tenhp<<"|"<<hp[i].sotc<<endl;
	}
}
void sotc(hocphan hp[],int n){
	for(int i=0;i<3;i++){
		if(hp[i].sotc>=3){
			cout<<"sotc lon hon 3"<<endl;
			cout<<hp[i].mahp<<"|"<<hp[i].tenhp<<"|"<<hp[i].sotc<<endl;	
		}
	}
}
/*void nhap2(hocphan hp[],int n)
{
	for(int i=0;i<n;i++)
	{	fflush(stdin);
		cout<<"nhap mahp: "; gets(hp[i].mahp);
		cout<<"nhap tenhp: "; gets(hp[i].tenhp);
		cout<<"nhap sotc: "; cin>>hp[i].sotc;
	}
}
void Tim_msv(hocphan hp[],int n){
	for(int i=0;i<n;i++){
		if(hp[i].mahp=="ma"){
			cout<<hp[i].mahp<<"|"<<hp[i].tenhp<<"|"<<hp[i].sotc;
			break;	
		}
        else cout<<"khong ton tai";
        break;
	}
}*/
int main(){
	int n;cin>>n;
	hocphan hp[n];
	nhap(hp,n);
	xuat(hp,n);
	sotc(hp,n);
	//nhap2(hp,n);
//	Tim_msv(hp,n);
}