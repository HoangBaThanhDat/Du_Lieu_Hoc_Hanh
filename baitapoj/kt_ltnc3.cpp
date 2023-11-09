#include<bits/stdc++.h>
using namespace std;
struct matphangtoado{
	float x;
	float y;
};
void nhap(matphangtoado mptd[],int n){
	for(int i=0;i<n;i++){
		cout<<"Nhập Tung Độ , Hoành Độ : ";	
		cin >> mptd[i].x;	
		cin >> mptd[i].y;
	}
}
void xuat(matphangtoado mptd[],int n){
	for(int i=0;i<n;i++){
		cout <<"("<<mptd[i].x<<","<<mptd[i].y<<")"<<" ";
	}
}

void kiemtradiem(matphangtoado mptd[], int n, float a, float b,float c, float d){
	int cnt = 0;
	for(int i = 0; i < n; i ++){
		if(mptd[i].x >= a && mptd[i].x <= c && mptd[i].y >= b && mptd[i].y <= d)
		{
			cout << "\n(" <<mptd[i].x<<","<<mptd[i].y<<")";
			cnt++;
		}
	}
	cout << "\nCo " << cnt << " diem thoa man.";
}
int main(){
	int n;cin>>n;
	matphangtoado mptd[n];
	nhap(mptd,n);
	xuat(mptd,n);
	float a,b,c,d;
	cout << "\nNHap toa do diem (a,b): ";	cin >> a >> b;
	cout << "\nNhap toa do diem (c,d): ";	cin >> c >> d;
	kiemtradiem(mptd, n, a, b, c , d);
}