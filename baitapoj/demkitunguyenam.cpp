#include<bits/stdc++.h>
#define ll long long 
int thongke(char a[]){
    ll i=0;
    ll d =0;
    while (a[i]!='\0'){
        if(a[i]=='u'||a[i]=='e'||a[i]=='o'||a[i]=='a'||a[i]=='i'||a[i]=='y'||a[i]=='U'||a[i]=='E'||a[i]=='O'||a[i]=='A'||a[i]=='I'||a[i]=='Y'){
            d++;
        }
        i++;
    }
    return d;
}
int main(){
    char a[80];
    while (fgets(a,80,stdin)){
        printf("%d\n",thongke(a));
    }
    
}