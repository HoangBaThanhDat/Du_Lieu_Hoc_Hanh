#include <iostream>

using namespace std;

// Ham tinh t?ng cac ch? s? c?a m?t s? nguyen
int sumOfDigits(int n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

// Ham tinh t?ng cac s? nguyen t? 1 d?n N th?a di?u ki?n
int sumOfIntegers(int N, int A, int B) {
    int sum = 0;

    for (int i = 1; i <= N; i++) {
        int digitSum = sumOfDigits(i);

        if (digitSum >= A && digitSum <= B) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    int N, A, B;

    cout << "Nhap vao N: ";
    cin >> N;
    cout << "Nhap vao A va B cach nhau boi dau cach: ";
    cin >> A >> B;

    int sum = sumOfIntegers(N, A, B);

    cout << "Tong cac so nguyen trong khoang 1 den N thoa dieu kien la: " << sum << endl;

    return 0;
}