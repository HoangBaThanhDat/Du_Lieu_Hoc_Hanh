
#include <iostream>
#include <string>
using namespace std;
struct SinhVien
{
	string MaSV;
	string TenSV;
	int Diem;
};
void Nhap(SinhVien sv[], int n)//&sv: khi in ra, dau "&" dung de tro toi sv, neu ko thi ko the in
{
	for(int i=0;i<n;i++)
	{
	   fflush(stdin); //xoa dau enter sau khi nhap n de nhap tiep
	   cout<<"Nhap MaSV: "; getline(cin,sv[i].MaSV); 
	   cout<<"Nhap Ten: "; getline(cin,sv[i].TenSV); 
	   cout<<"Nhap Diem: "; cin>>sv[i].Diem; 
	}
}
void Xuat(SinhVien sv[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"MaSV: "<<sv[i].MaSV<<endl;
	    cout<<"Ten: "<<sv[i].TenSV<<endl;
	    cout<<"Diem: "<<sv[i].Diem<<endl;
	}	
}
//tim kiem sv theo masv(/tensv/diem)
void TimSV_msv(SinhVien sv[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(sv[i].MaSV=="ma")
		{
			cout<<sv[i].MaSV<<"|"<<sv[i].TenSV<<"|"<<sv[i].Diem<<endl;
		    break;
		}
		else cout<<"Khong ton tai"<<endl;	   
	}
}
//sap xep(cmp_compare)
/*bool cmp(const SinhVien sv1,const SinhVien sv2)
{
	return sv1.Diem<sv2.Diem;
}*/
int main(){
	int n,i;
	cin>>n;
	//fflush(stdin);
	SinhVien sv[n];
	Nhap(sv,n);
	Xuat(sv,n);
	//string msv;
	//fflush(stdin);
	//cout<<"\n Nhap masv can tim: ";
	//getline(cin,msv);
	TimSV_msv(sv,n);
	//sap xep
	//sort(sv,sv+n,cmp);
	//in ra
	//cout<<"DSSV sau khi sap xep: "<<endl;
	//Xuat(sv,n);
	return 0;
}
