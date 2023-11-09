#include <bits/stdc++.h>
using namespace std;

class phanSo {
	private:
	    int tuSo;
	    int mauSo;
	public:
		void nhap(){
			cout<< "Nhap tu so: "; cin>> tuSo;
		    cout<< "Nhap mau so: "; cin>> mauSo;
		}
		void in(){
			cout << tuSo <<"/"<< mauSo;
		}
		void rutgon(){
			int a= tuSo;
			int b= mauSo;
			while (a!=b){
				if (a>b)
				    a =a -b;
				else
					b=b-a;
			}
			tuSo=tuSo/a;
			mauSo=mauSo/a;
		}
		bool sosanh(phanso ps){
			return tu*ps.mau<ps.tu*mau;
		}
};
	
		
int main(){
	phanSo ps;
	ps.nhap();
	ps.rutgon();
	ps1.in();
					
}