#include <iostream>

using namespace std;

void daonguoc_khongdequy(int n){
	if (n/10==0)
		cout<<n;
	else
		while(n>0){
			cout<<n%10;
			n = n/10;
		}	
}

void daonguoc_dequy(int n){
	if (n/10==0)
		cout<<n;
	else{
		cout<<n%10;
		daonguoc_dequy(n/10);
	}
}

int main(){
	int n = 32489;
	daonguoc_khongdequy(n);
	cout<<" ";
	daonguoc_dequy(n);
	return 0;
}
