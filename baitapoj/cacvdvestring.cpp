#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	string st;
	getline(cin,st);
//	cout<<st.length()<<endl;
//	cout<<st.size()<<endl;
//	cout<<st[2]<<endl;
//	cout<<st.at(2)<<endl;
    int x,y;cin>>x>>y;
   st=st.erase(x,y);
//    st=st.substr(6,3);
    cout<<st;
}