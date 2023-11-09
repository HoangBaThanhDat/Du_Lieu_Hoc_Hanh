#include<iostream>
#include <vector>
using namespace std;

class Book{
	string mas, tens, tg;
	int gia, sotrang;
	
	public:
		Book(){
			cout<<"nhap mas: "; getline(cin, mas);
			cout<<"nhap tens: "; getline(cin, tens);
			cout<<"nhap tac gia: "; getline(cin, tg);
			cout<<"nhap don gia: "; cin>>gia;
			cout<<"nhap so trang: "; cin>>sotrang;
		}
		
		string getmas(){
			return mas;
		}
		
		void hienthi(){
			cout<<mas<<" "<<tens<<" "<<tg<<" "<<sotrang<<" "<<gia<<endl;
		}
		
		bool operator>(Book B){
			return this->gia > B.gia;
		}                         
};

int check(string mas, vector<Book> ds){
	for(int i = 0; i < ds.size(); i++)
			if (ds[i].getmas()== mas) {                         
				return i;
			}
	return -1;
}

int main(){
	vector<Book> ds = {};
	int control;
	
	continue_chuong_trinh:
	cout << "Chuong trinh Quan Ly Sach" << endl;
	cout << "1. Them Sach" << endl;
	cout << "2. Xoa Sach" << endl;
	cout << "3. Sx danh sach" << endl;
	cout << "4. Hien thi danh sach" << endl;
	cout << "5. Thoat" << endl;
	
	nhap_lenh_control:
	cout << "Nhap chuc nang muon su dung: ";
	cin >> control;
	cin.ignore();
	switch (control) {
    	case 1:{
    		Book b;
    		if (check(b.getmas(), ds)== -1){
				ds.push_back(b);
				cout<<"Da them thanh cong!"<<endl;
			}
			goto continue_chuong_trinh;
			}
		case 2:
			{
			//ds.pop_back();
			string mas="";
			cout<<"nhap mas can xoa: "; getline(cin, mas);
	
			int pos = check(mas, ds);
			if (pos == -1)
				cout<<"Sach khong ton tai!"<<endl;
			else{
				ds.erase(ds.begin() + pos);
				cout<<"Da xoa 1 sach thanh cong!"<<endl;
				}
			goto continue_chuong_trinh;
			}
		case 3:
			for(int i=0; i<ds.size()-1; i++)
				for(int j=i+1; j<ds.size(); j++)
					if (ds[i] > ds[j])
						swap(ds[i], ds[j]);
			goto continue_chuong_trinh;
		case 4:
			for(int i=0; i<ds.size(); i++)
				ds[i].hienthi();
			goto continue_chuong_trinh;
		case 5:
			break;
		default:
            goto nhap_lenh_control;	
	}
	return 0;
}

