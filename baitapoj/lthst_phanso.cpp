#include<iostream>
using namespace std;

class phanso{
	private:
		int tu;
		int mau;
	public:
		void nhap(){
			cout<<"nhap tu: "; cin>>tu;
			cout<<"nhap mau: "; cin>>mau;
		}
		
		void in(){
			cout<<"phan so: "<<tu<<"/"<<mau<<endl;
		}
		
		void rutgon(){
			int x, y;
			x = tu; y = mau;
			while(x!=y){
				if (x>y)
					x = x - y;
				else
					y = y - x;
			}
			tu = tu/x;
			mau = mau/x;
		}
		
		bool sosanh(phanso ps){
			//tra ve true neu phan so noi tai > ps
			return tu*ps.mau > mau * ps.tu;
		}
};

int main(){
	int n ;
	cin>>n;
	phanso ps[n];
	for(int i = 0; i<n; i++){
		ps[i].nhap();
		ps[i].rutgon();
	}
	
	for(int i=0; i<n-1; i++)
		for(int j=i; j<n; j++)
			if (ps[i].sosanh(ps[j])==false)
				swap(ps[i], ps[j]);
	
	for(int i = 0; i<n; i++){
		ps[i].in();
	}
	return 0;
}
