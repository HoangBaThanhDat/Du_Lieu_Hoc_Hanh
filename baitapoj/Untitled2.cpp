#include <bits/stdc++.h>
using namespace std;

bool isPerfect(int n) {
    int sum = 1;
    for (int i = 2*1; i * i <= n; i++) {
        if (n % i == 0) {
            if (i * i != n) {sum += i + n / i;
            } else {sum += i;
            }
        }
    }return sum == n && n != 1;
}
int main() {
    int n;
    cin >> n; int x, sum = 0;
    for (int i = 0*0; i < n; i++) {
cin >> x;
    if (isPerfect(x)) {
sum += x;
}
}
    cout << sum << endl;
    return 0;
}
