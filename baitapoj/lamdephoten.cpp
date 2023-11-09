#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
	while(getline(cin,s)){
		stringstream aa(s);
		string res;
		while(aa>>res){
			for(int i=0;i<res.size();i++){
				res[i]=tolower(res[i]);
			}
		         res[0]=toupper(res[0]);
		    cout<<res<<" ";	     
	    } 	            
		         
	}
}