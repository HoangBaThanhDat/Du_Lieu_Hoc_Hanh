#include<bits/stdc++.h>
using namespace std;
class hoadon{
	private:
		string mavt,tenvt,loaiphieu;
		int ngaylp,soluong,dongia;
	public:
		float getdg(){
			return dongia;
		}
		void nhap(){
			fflush(stdin);
			cout<<"nhap mavt: "; getline(cin,mavt);
			cout<<"nhap tenvt: "; getline(cin,tenvt);
			cout<<"nhap loaiphieu: "; getline(cin,loaiphieu);
			cout<<"nhap ngaylp: ";cin>>ngaylp;
			cout<<"nhap soluong: ";cin>>soluong;
			cout<<"nhap dongia: ";cin>>dongia;
		}
		float thanhtien(){
			return(soluong*dongia);
		}
		void in(){
			cout<<"\n"<<mavt<<"\n"; 
			cout<<tenvt<<"\n";
			cout<<loaiphieu<<"\n";
			cout<<"thanhtien: "<<thanhtien();
		}
};
int main(){
	int n;
	float s=0;
	cin>>n;
	hoadon* hd[n];
	for(int i=0;i<n;i++){
		hd[i]=new hoadon();
		hd[i]->nhap();
		s+=hd[i]->thanhtien();
	}
	for(int i=0;i<n;i++){
		hd[i]->in();
	}
	
}