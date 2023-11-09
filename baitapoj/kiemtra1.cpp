#include<bits/stdc++.h>
#include<string>

//const int  MAX_SIZE=100;

using namespace std;
string xacdinh(string str){
	return str.substr(0,3);
}

int main(){
// cau 1 a
	string  a; 
	getline(cin,a);
	cout<<xacdinh(a)<<"\n";
// cau 1 b	
	string madshp[1001];
	int n; 
	cout<<"nhap so luong hoc phan: "; 
	cin>>n;
	for(int i=0;i<n;i++){
		fflush(stdin);
		cout<<"nhap ma hp: "<<i+1<<"  ";
		cin>>madshp[i];
	} 
	cout<<"cac hp thuoc khoa cntt: "<<endl;
	for(int i=0;i<n;i++){
		fflush(stdin);
		if(madshp[i].substr(0,3)=="TIN"){
			cout<<"_ "<<madshp[i]<<endl;
		}
	}
}