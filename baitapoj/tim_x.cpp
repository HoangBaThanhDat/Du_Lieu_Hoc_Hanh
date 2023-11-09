#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a,b; cin>>a>>b;
	if (a == 0 && b == 0) {
        cout << "Many Solutions" << endl;
    } else if (a == 0) {
        cout << "No Solution" << endl;
	}else{
		double x=-b/(double)a;
		cout<<fixed<<setprecision(2)<<x;
	}
}		