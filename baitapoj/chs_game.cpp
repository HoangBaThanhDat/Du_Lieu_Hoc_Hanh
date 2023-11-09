#include <bits/stdc++.h>
using namespace std;
const int N = 1000005;
	int n;
	int trai[N], phai[N];
	int T,P;
bool ktra() {
    for (int i = 1; i <= n; i++) if (trai[i] == T && phai[i] == P) return 0;
    return 1;
}

int main()
{ 
	
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> trai[i] >> phai[i];
        T = max(T,trai[i]);
        P = max(P,phai[i]);
    }
    if (ktra()) cout << T + P;
    else {
        sort(trai + 1, trai + 1 + n, greater<int>());// sap xep
        sort(phai + 1, phai + 1 + n, greater<int>());
        cout << max(T +  phai[2], P + trai[2]);
    }
}                                 