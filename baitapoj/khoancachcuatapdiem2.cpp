#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x, y;
    long long sumX = 0, sumY = 0, sumX2 = 0, sumY2 = 0, sumXY = 0;
    for(int i=1; i<=n; i++) {
        cin>>x>>y;
        sumX += x;
        sumY += y;
        sumX2 += x * x;
        sumY2 += y * y;
        sumXY += x * y;
    }
    long long sumDistance = n * (sumX2 + sumY2) - sumX * sumX - sumY * sumY;
    cout<<sumDistance<<endl;
    return 0;
}