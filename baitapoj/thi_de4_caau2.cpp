#include<bits/stdc++.h>
using namespace std;
int sum(string s){
	int t =0;
	for(int i=0;i<s.size();i++){
		if(s[i]>='0' && s[i]<='9'){
			t=t+(s[i]-'0');	
		}
	}
		return t;
}
int main()
{
	string a;
	getline(cin,a);
	stringstream ss(a);
	string sort;
	while(ss>>sort)
		cout<<sort;
		long long kq=sum(a);
//		while(kq<2 || kq>11){
//			kq=sum(to_string(kq));
//		}
	cout<<" ";
	cout<<kq;
	return 0;
}