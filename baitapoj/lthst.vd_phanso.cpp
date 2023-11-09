#include<bits/stdc++.h>
using namespace std;
class phanso{
	private:
		int tuso,mauso;
	public:
		void nhap(){	
			cout<<"nhaptuso ";cin>>mauso;
			cout<<"nhapmauso ";cin>>mauso;
		}
		void rutgon(){	   
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
			cout<<tuso<<"/"<<mauso;
		}
};
int main(){
	phanso ps;    
	ps.nhap(); 
	ps.rutgon();
	ps.in();
}