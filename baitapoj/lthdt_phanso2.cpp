#include<bits/stdc++.h>
using namespace std;
class phanso{
	private:
		int tuso,mauso;
	public:
//		void nhap(){	
//			cout<<"nhaptuso ";cin>>tuso;
//			cout<<"nhapmauso ";cin>>mauso;
//		}
		phanso(){	
			cout<<"nhaptuso ";cin>>tuso;
			cout<<"nhapmauso ";cin>>mauso;
		}
		phanso(int x,int y){
			this->tuso=x;
			this->mauso=y;
		}
		~phanso(){
			cout<<"han huy dc goi !";
		}
		phanso cong(phanso ps){
			phanso ketqua(0,0);
			if(mauso==ps.mauso){
				ketqua.tuso=tuso+ps.tuso;
				ketqua.mauso=mauso;
			}
			else{
				ketqua.tuso = tuso*ps.mauso + ps.tuso*mauso;
				ketqua.mauso = mauso*ps.mauso;
			}
			ketqua.toigian();
			return ketqua;
		}
		void toigian(){	   
			int x,y;
			x=tuso; y=mauso;
			while(x!=y){
				if(x>y){
					x-=y;
				}
				else{
					y-=x;
				}
			}
			tuso/=x;
			mauso/=y;
		}
		void in(){
			cout<<tuso<<"/"<<mauso<<endl;
		}
		
};
int main(){
//	phanso *ps1, *ps2;
//	ps1=new phanso();
//	ps2=new phanso();
//	ps1->nhap();
//	ps1->toigian();
//	
//	ps2->nhap();
//	ps2->toigian();
	phanso ps1,ps2,ps3(0,0);
	ps1.toigian();
	ps2.toigian();
	ps3=ps1.cong(ps2);
	ps3.in();
	
	
}