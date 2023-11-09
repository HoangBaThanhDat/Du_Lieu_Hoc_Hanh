#include<bits/stdc++.h>
using namespace std;
class laodong{
	private:
		string masv,hoten,ngaysinh,chucvu;
		double hesoluong;
	public:
		laodong(){
			fflush(stdin);
			cout<<"Nhap ma sv:"; getline(cin,masv);
			cout<<"nhap hoten:"; getline(cin,hoten);
			cout<<"nhap ngaysinh:"; getline(cin,ngaysinh);
			cout<<"nhap hesoluong:"; cin>>hesoluong;
			fflush(stdin);
			cout<<"nhap chucvu:"; getline(cin,chucvu);
		}
		~laodong(){
			cout<<"Ham Huy Duoc Goi !!!.";
		}
		double tinhluong(laodong ld){
			int phucap;
			if(chucvu=="nv"){
				phucap=500000;
			}else{
				if(chucvu=="pp"){
					phucap=700000;
				}else{
					phucap=1000000;
				}
			}return hesoluong*150000+phucap;
		}
		void in(){
			cout<<masv<<"_";
			cout<<hoten<<"_";
			cout<<ngaysinh<<"_";
			cout<<hesoluong<<"_";
			cout<<chucvu<<endl;
		}
};
int main(){
		int n;
		cin>>n;
		laodong ld[n];
		for(int i = 0; i<n; i++){
			ld[i].in();
		}
		
}