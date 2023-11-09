#include<bits/stdc++.h>
using namespace std;
struct Node{
	string makhachhang;
	string hoten;
	string diachi;
	int chisocu;
	int chisomoi;
	Node *next;	
};
void Nhap(Node *head,string makhachhang, string hoten, string diachi, int chisocu, int chisomoi){
	Node *temp = head;
	while(temp!=NULL){
		if(temp->makhachhang==makhachhang) return;
			temp=temp->next;
	}
	Node *p  = new Node;
	temp->makhachhang=makhachhang;
	temp->hoten=hoten;
	temp->diachi=diachi;
	temp->chisocu=chisocu;
	temp->chisomoi=chisomoi;
	head = temp;
}
void Xuat(Node *head,string makhachhang, string hoten, string diachi, int chisocu, int chisomoi){
	Node *last = new Node;
	last = head;
	while(last != NULL){
		cout<<last->makhachhang<<last->hoten<<last->diachi<<last->chisocu<<last->chisomoi;
		cout<<endl;
		last = last->next;
	}
}
int main(){
	Node* head = NULL;
	string n;
	while(getline(cin,n)){
			string makhachhang,  hoten,  diachi; int chisocu, chisomoi;
			cin>>makhachhang>>hoten>>diachi>>chisocu>>chisomoi;
			Nhap(head, makhachhang,  hoten,  diachi,  chisocu,chisomoi);
			Xuat(head,makhachhang,  hoten,  diachi,  chisocu,  chisomoi);
		if(n =="0"){
			break;
	}
}
}