#include <bits/stdc++.h>
using namespace std;
struct List
{
	int data;
	List *next;
};
List *TaoDS(int ele)
{
	List *p = new List;
	p -> data = ele;
	p -> next = NULL;
	return p;
};

void InDS(List *head)
{
	List *p = head;
	while(p!=NULL)
	{
		cout << p->data << " ";
		p = p->next;
	}
}

void InsertLast(List *&head, int ele)
{
	List *p = TaoDS(ele);
	if(head==NULL)
		head = p;
	else{
		List *q = head;
		while(q->next!=NULL){
			q = q->next;
		}
		q -> next = p;
	}
}
int Sum(List *head)
{
	int S=0;
	List *p = head;
	while(p!=NULL)
	{
		S = S + p->data;
		p = p->next;
	}
	return S;
}
int DemPhanTu(List *head)
{
	int dem = 0;
	List *p = head;
	while(p!=NULL){
		dem++;
		p = p -> next;
	}
	return dem;
}
void Delete(List *&head, int pos)
{
	int b = DemPhanTu(head);
	if(head==NULL || pos<1 || pos>b) return;
	if(pos==1)
	{
		List *p = head;
		head = head->next;
		p->next = NULL;
		delete(p);
	}
	else{
		List *p = NULL;
		List *q = head; 
		for(int i=0; i<pos-1; i++)
		{
			p = q;
			q = q->next;
		}
		p->next = q->next;
		delete(q);
	}
}
int main()
{
	List *head = NULL;
	int n, ele, x, p;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> ele;
		InsertLast(head,ele);
	}
	string st;
	while(true)
	{
		cin >> st;
		if(st == "i"){
			cin >> x;
			InsertLast(head,x);
		}
		if(st == "s") cout << Sum(head) << endl;
		if(st == "d"){
			cin >> p;
			Delete(head,p);
		}
		if(st == "0") {
			char b;
			cin >> b;
			break;
		}
	}
	return 0;
}