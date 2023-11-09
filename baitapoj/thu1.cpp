#include <iostream>
#include <vector>
using namespace std;

// Kh?i t?o l?p Point d? luu tr? di?m
class Point
{
public:
    int x;
    int y;
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
};

// Ham nh?p danh sach n di?m trong do n <= 100
vector<Point> inputPoints(int n)
{
    vector<Point> points;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap thong tin diem " << i+1 << ": " << endl;
        int x, y;
        cout << "- Toa do x: ";
        cin >> x;
        cout << "- Toa do y: ";
        cin >> y;
        Point p(x, y);
        points.push_back(p);
    }
    return points;
}

// Vi d? s? d?ng ham inputPoints d? nh?p vao danh sach 4 di?m
int main() {
    vector<Point> pointsList = inputPoints(4);
    cout << "Danh sach cac diem: " << endl;
    for (int i = 0; i < pointsList.size(); i++) {
        cout << "(" << pointsList[i].x << "," << pointsList[i].y << ")" << endl;
    }
    return 0;
}
