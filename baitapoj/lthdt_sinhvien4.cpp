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
		void in(){
			cout<<"\n"<<hoten<<"\n"; 
			cout<<ns<<"\n";
			cout<<gt<<"\n";
			cout<<toan<<" "<<li<<" "<<hoa<<endl;
		}
		sinhvien(){
			hoten="";
			ns="1/1/2020";
			toan=9;
			li=9;
			hoa=9;
		}
		sinhvien(string hoten,string ns,bool gt,float toan,float li,float hoa){
			this->hoten=hoten;
			this->ns=ns;
			this->toan=toan;
			this->li=li;
			this->hoa=hoa;
		}
		sinhvien(const sinhvien &sv){
			this->hoten=sv.hoten;
			this->ns=sv.ns;
			this->toan=sv.toan;
			this->li=sv.li;
			this->hoa=sv.hoa;
		}
		~sinhvien(){
			this->hoten="";
			this->ns="";
			this->toan=0;
			this->li=0;
			this->hoa=0;
			cout<<"ham huy dc goi !"<<endl;
		}
};
int main(){
	sinhvien t;
	t.in();
	
	sinhvien t1("that danh","10/10/1990",1,5,7,8);
	t1.in();
	
	sinhvien t2=t1;
	t2.in();
	
}