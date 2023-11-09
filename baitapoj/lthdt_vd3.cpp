#include <bits/stdc++.h>
using namespace std;

class phanso {
	private:
	    int tuso;
	    int mauso;
	public:
		void nhap(){
			cout<< "Nhap tu so: "; cin>> tuso;
		    cout<< "Nhap mau so: "; cin>> mauso;
		}
		void in(){
			cout << tuso <<"/"<< mauso;
		}
		void rutgon(){
			int a= tuso;
			int b= mauso;
			while (a!=b){
				if (a>b)
				    a =a -b;
				else
					b=b-a;
			}
			tuso=tuso/a;
			mauso=mauso/a;
		}
		
};
	
		
int main(){
	phanso ps;
	ps.nhap();
	ps.rutgon();
	ps.in()	;
			
}