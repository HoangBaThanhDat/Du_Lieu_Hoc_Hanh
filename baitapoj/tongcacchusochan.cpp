#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		int sum=0; cin>>s;
		for(int i=0;i<s.size();i++)
		{
			if((s[i]-'0')%2==0)//s[i]-'0' chuy?n d?i ky t? s? s[i] thanh gia tr? s? tuong ?ng. Vi d?, n?u s[i] la ky t? '2', thi s[i]-'0' s? co gia tr? la 2.
			{
				sum+=(s[i]-'0');
			}
		}
	cout<<sum<<endl;	
	}
}
