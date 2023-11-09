	#include<bits/stdc++.h>
	using namespace std;
	class sinhvien{
		private:
			string hoten,ngaysinh,gioitinh,lop;
			float diemtcc,tin,triet;
		public:
			void nhap(){
				fflush(stdin);
				cout<<"hoten :"; getline(cin,hoten);
				cout<<"ngaysinh :"; getline(cin,ngaysinh);
				cout<<"gioitinh :"; getline(cin,gioitinh);
				cout<<"lop :"; getline(cin,lop);
				cout<<"diemtcc :"; cin>>diemtcc;
				cout<<"tin :"; cin>>tin;
				cout<<"triet :"; cin>>triet;
			}
			void in(){
				cout<<hoten<<"||"<<ngaysinh<<"||"<<gioitinh<<"||"<<lop<<"||"<<diemtcc<<"||"<<tin<<"||"<<triet<<"__DTB__"<<diemtcc<<endl; 
			}
			float diemtb(){
				return(diemtcc+tin+triet)/3;
			}
	};
	int main(){
		int n;
		cin>>n;
		sinhvien sv[n];
		for(int i = 0; i<n; i++){
			sv[i].nhap();
		}
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(sv[i].diemtb()<sv[j].diemtb()){
					swap(sv[i],sv[j]);
				}
	    	}
		}
		for(int i = 0; i<n; i++){
			sv[i].in();
		}
		for(int i=0;i<n;i++){
			if(sv[i].diemtb()==7){
				cout<<"diemtb :";
				sv[i].in();
			}
		}
	}