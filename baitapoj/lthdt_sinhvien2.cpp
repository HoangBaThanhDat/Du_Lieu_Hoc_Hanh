#include<bits/stdc++.h>
using namespace std;
class sinhvien{
	private:
		string hoten;
		string ns;
		bool gt;
		float toan;
		float li;
		float hoa;
	public:
		void nhap(){
			
			cout<<"nhap hoten: "; getline(cin,hoten);
			cout<<"nhap ngaysinh: "; getline(cin,ns);
			cout<<"nhap gioitinh: "; cin>>gt;
			cout<<"nhap diem toan, ly , hoa: "; cin>>toan>>li>>hoa;
		}
		float dtb(){
			return(toan+li+hoa)/3;
		}
		void in(){
			cout<<"\n"<<hoten<<"\n"; 
			cout<<ns<<"\n";
			cout<<gt<<"\n";
			cout<<"diem tb: "<<dtb();
		}
};
int main(){
	sinhvien* sv=new sinhvien();
	sv->nhap();
	sv->in();
	
	sinhvien sv1;
	sv1.nhap();
	
	sinhvien* sv2;
	sv2 = &sv1;
	sv2->in();
}