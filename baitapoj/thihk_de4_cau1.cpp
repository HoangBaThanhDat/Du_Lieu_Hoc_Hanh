#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct diemhp
{
	float diemqtht,diemthi,diemkthp;
	string ketqua;
};
void tinhdiem(diemhp hp[],int n)
{
	for(int i=0;i<n;i++)
	{
		hp[i].diemkthp=hp[i].diemqtht*40/100 +hp[i].diemthi*60/100;
		hp[i].diemkthp=round(hp[i].diemkthp*10)/10;
	}
}
void ketqua(diemhp hp[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(hp[i].diemkthp<4)
		{
			hp[i].ketqua+="F";
		}
		else if(hp[i].diemkthp >=4 &&hp[i].diemkthp<5.5)
		{
			hp[i].ketqua+="D";
		}
		else if(hp[i].diemkthp >=5.5 &&hp[i].diemkthp<7)
		{
			hp[i].ketqua+="C";
		}
		else if(hp[i].diemkthp >=7 &&hp[i].diemkthp<=8.4)
		{
			hp[i].ketqua+="B";
		}
		else if(hp[i].diemkthp >=8.5 &&hp[i].diemkthp<=10)
		{
			hp[i].ketqua+="A";
		}
	}
}
void xuat(diemhp hp[],int n)
{
	for(int i=0;i<n;i++)
	{	cout<<fixed<<setprecision(1);
		cout<<hp[i].diemkthp<<" "<<hp[i].ketqua<<endl;
	}
}
int main()
{
	diemhp hp[100];
	int p;
	cin>>p;
	for(int i=0;i<p;i++)
	{
		cin>>hp[i].diemqtht>>hp[i].diemthi;
	}
	tinhdiem(hp,p);
	ketqua(hp,p);
	xuat(hp,p);
}