#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	while(getline(cin,s)){
		for(int i=0;i<s.length();i++){
			s[i]=tolower(s[i]);
		}
		stringstream ss(s);
	    string moo;
		int dem=0;
		vector<string>v;
		while(ss>>moo){
			v.push_back(moo);
			dem++;
		}
		for(int i=0;i<dem;i++){
			if(i!=dem-1){
				cout<<v[i][0];
			}
			else
			    cout<<v[i]<<"@huscmail.edu.vn"<<endl;
		}	
	}
}