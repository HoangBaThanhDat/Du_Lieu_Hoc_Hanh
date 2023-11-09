#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;	
	cin >> n;
	int sum = 0;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j<= n; j++)
		{
			int a;	
			cin >> a;
			if(i == j || i + j == n + 1)
			{
				sum += a;
			}
		}
	}
	cout << sum;
}