#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	double a1, b1, c1, a2, b2, c2;
    double D, Dx, Dy, x, y;
	for(int i=0;i<t;i++){
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    D = a1 * b2 - a2 * b1;
    Dx = c1 * b2 - c2 * b1;
    Dy = a1 * c2 - a2 * c1;
    if (D == 0) {
        if (Dx + Dy == 0)
            cout << "Many solutions"<<endl;
        else
            cout << "No solution"<<endl;
    }
    else {
        x = Dx / D;
        y = Dy / D;
        cout << fixed<<setprecision(6) << x <<" "<< y<<endl;
    }
	}
    return 0;
}