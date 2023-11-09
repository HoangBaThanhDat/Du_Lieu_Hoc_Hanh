#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while (t--){
        long long n[8]={};// khai bao mang gom 8 ptu( 0 1 2 3 4 5 6 7)
        for (int i=1;i<=7;i++){
                cin>>n[i];
        }
        sort(n+1,n+1+7);
        long long a=n[1];// lay cai nho nhat
        long long b=n[2];//............hai
        cout<<a<<" "<<b<<" "<<n[7]-(a+b)<<endl;
    }
}