#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int j=0;j<n-1;j++){
        for(int i=j+1;i<n;i++ ){
        if(abs(A[j]) > abs (A[i])){
            long long temp;
            temp = A[j];
            A[j] = A[i];
            A[i] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<"  ";
    }
    return 0;
}
