
	#include<bits/stdc++.h>
using namespace std;
void DoiCho(int a,int b)
{
for(int i=a;i<=b;i++){
	if (i%5==0 &&i%3==0)
	cout <<i <<" ";
}
}
int main() 
{
int a,b;
cin >> a>>b;
DoiCho(a,b);
	}
