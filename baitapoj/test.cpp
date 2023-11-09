#include<bits/stdc++.h>
#	include <iostream>
#include <stdlib.h>
using namespace std;
struct songuyen{
	int n;
	songuyen *next;
};
songuyen *nhap(songuyen *f){
	int k;
	songuyen *p;
	f = NULL;
	do{
		cin>>k;
		if(k==0){
			break;
		}
		p = new songuyen;
		p->n = k;
		p->next = NULL;
		if(f==NULL){
			f=p;
		}
		else{
			p->next=f;
			f=p;
		}while(1);
		return f;
}
songuyen *in(songuyen *f){
	songuyen *p;
	p=f;
	while(p!=NULL){
		cout<<p->n<<" ";
		p=p->next;
	}
	cout<<"\n";
}
so nguyen *timkiem(songuyen *first,int x){
	songuyen *p;
	for(p= first;p!= NULL;p=p->next){
		if(p->n==x){
			return p;
		}
	}
	return NULL;
}
int main(){
	int first;
	int x;
	cout<<"nhap: "<<"\n";
	frist =nhaap(frist);
	in(frist);
}