#include <bits/stdc++.h>
using namespace std;
int main()
{
	int days,years,months,A;
	cin >> A;
	years=A/365;
	months = (A-years*365)/30;
	days = (A-years*365) - (months*30) ;
	if (years < 1) {		}
	else {	cout << years << " years" << endl;	}
	if (months < 1) {		}
	else {	cout << months << " months" << endl;	}
	if (days < 1) {		}
	else {		cout << days << " days";	}
}