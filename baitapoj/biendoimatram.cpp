#include <bits/stdc++.h>
 using namespace std;

 int main()
 {
 	 int m,n,a[100][100];

 long long r[100],c[100];

 //Nh?p kích thu?c m?ng.
 cin>>n>>m;
 //Nh?p m?ng và bi?n d?i dòng, c?t n?u a[i][j]=1 theo yêu c?u.
 for(int i = 0;i < n;i++)
 for(int j = 0;j < m;j++){
 cin>>a[i][j];
 if(a[i][j] == 1)
 r[i] = 1,c[j] = 1;//1 0 0 0
 
 }
 //In m?ng.
 for(int i = 0;i < n;i++){
 for(int j = 0;j < m;j++)
 if(r[i] == 1 || c[j] == 1)
 cout<<1<<" ";
 else cout<<0<<" ";
 cout<<endl;
 }
 return 0;
 }
