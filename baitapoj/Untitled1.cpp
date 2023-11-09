#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;	cin >> n;
	float a[100];
	int dem = 0;
	for(int i = 1; i <=n; i++)
	{
		cin >> a[i];
	}
	float temp = 0;
	for(int i = 1; i <=n ;i++)
	{
		if(a[i] < temp)
			temp = a[i];
	}
	for(int i = 1; i <=n; i++)
	{
		if(temp == a[i])
		{
			dem++;
		}
	}
	cout << dem;
	return 0;
}