#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct Diem {
    int x;
    int y;
};

void NhapDiem(Diem a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap diem: " << i+1 << ": ";
        cin >> a[i].x >> a[i].y;
    }
}

void XuatDiem(Diem a[], int n) {
    cout << "Danh sach cac diem:  ";
    for (int i = 0; i < n; i++) {
        cout << "(" << a[i].x << "," << a[i].y << ") ";
    }
    cout << endl;
}

void inDiemHCN(Diem a[], int n, Diem A, Diem C) {
    int min_x = min(A.x, C.x);
    int max_x = max(A.x, C.x);
    int min_y = min(A.y, C.y);
    int max_y = max(A.y, C.y);
    int d = 0;
    
    cout << "DiemTrongHCN (" << A.x << "," << A.y << ") (" << C.x << "," << C.y << "): ";
    for (int i = 0; i < n; i++) {
        if (a[i].x >= min_x && a[i].x <= max_x && a[i].y >= min_y && a[i].y <= max_y) {
            cout << "(" << a[i].x << "," << a[i].y << ") ";
            d++;
        }
    }
    cout << endl;
    cout << "Tong so diem ben trong HCN " << d << endl;
}

int main() {
    ll n;
   Diem a[100];
    Diem A, C;
    
    cout << "Nhap so diem: ";
    cin >> n;
    
    NhapDiem(a, n);
    XuatDiem(a, n);
    
    cout << "Nhap toa do cua 2 diem de xac dinh HCN ";
    cin >> A.x >> A.y >> C.x >> C.y;
    
    inDiemHCN(a, n, A, C);
    
    return 0;
}