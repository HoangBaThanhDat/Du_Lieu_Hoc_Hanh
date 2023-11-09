#include <bits/stdc++.h>
using namespace std;
int main(){
	char a1[] = {"absinth"};
	char a2[] = {'b','e','e','r'};
	char a3[] = {'b','r','a','n','d','y'};
	char a4[] = {'c','h','a','m','p','a','g','n','e'};
	char a5[] = {'g','i','n'};
	char a6[100] = {'r','u','m'};
	char a7[100] = {'s','a','k','e'};
	char a8[100] = {'t','e','q','u','i','l','a'};
	char a9[100] = {'v','o','d','k','a'};
	char a10[100] = {'w','h','i','s','k','e','y'};
	char a11[100] = {'w','i','n','e'};
	int t;
	cin >> t;
	int dem = 0;
	while (t--){
		string s;
		cin >> s;
		string a;
		for (int i = 0 ;i<s.size();i++) {
			s[i] = tolower(s[i]);
		}
		int x;
		if (s[0]>='0' && s[0]<='9'){
			a = s;
			stringstream ss(a);
			ss >> x;
			if (x < 18) dem++;
			if (x == 16) dem--;
		}
		else {
			if (s== a1 || s == a2||s== a3||s==a4||s==a5||s==a6||s==a7||s==a8||s==a9||s==a10||s==a11) dem++;
		}
	}
	cout << dem ;
}
