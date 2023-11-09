#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll t,n,a[100005],b[100005];
bool kiemtra(){
    for(ll i=1;i<=n;i++)if(a[i]>b[i])return 0;
    return 1;
}

int main(){
   int t;
   cin>>t;
   while(t--){
        cin>>n;
        for(ll i=1;i<=n;i++) cin>>a[i];
        for(ll i=1;i<=n;i++) cin>>b[i]; 
        sort(a+1,a+1+n);
        sort(b+1,b+1+n);
        if (kiemtra()) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

}