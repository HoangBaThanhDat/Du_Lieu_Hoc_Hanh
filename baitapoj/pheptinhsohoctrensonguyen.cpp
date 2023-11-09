#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a,b;
	cin>>a>>b;
	long long tong , hieu , tich , thuong , du;
	tong = a + b;
	hieu = a - b;
	tich = a * b;
	thuong = a / b;
	du = a % b;
	cout<< a << " + " << b << " = " << tong <<endl;
	cout<< a << " - " << b << " = " << hieu <<endl;
	cout<< a << " * " << b << " = " << tich <<endl;
	cout<< a << " / " << b << " = " << thuong <<endl;
	cout<< a << " % " << b << " = " << du <<endl;
}