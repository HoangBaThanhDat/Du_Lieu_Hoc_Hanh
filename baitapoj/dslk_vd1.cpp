#include<bits/stdc++.h>
using namespace std;

typedef struct Node{
 	int data;
 	struct Node *next;
 }List;
 
 List * head = NULL;
 
 List* TaoNode(int ele){
 	List* temp = new List();
 	temp->data = ele;
 	temp->next = NULL;
 	return temp;
 }
 void InsertLast( List *&head,int ele){
 	List* temp = TaoNode(ele);
 	if(head == NULL){
 		head = temp;
	 }else{
	 	List * p = head;
	 		while (p->next != NULL)
	 			p = p->next;
	 		p->next = temp;	
	 }
 }
 void Delete( List *& head, int pos){
 	int n=0;
 	List * p = head;
 		while(p != NULL){
 			n++;
 			p = p->next;
		}
		if(pos>=1 && pos <=n){
			if(pos==1)
			  head = head->next;
				else{
					p=head; int i=1;
					while(p!=NULL && i<pos-1){
						i++;
						p=p->next;
					}
					p->next=p->next->next;
			}
		}
 }
 long long Sum(List *head){
 	int s;
 	List* temp = head;
 	while(temp != NULL){
 		s += temp->data;
		temp = temp->next;
	}
	return s;
 }
 int main(){
 	int n; cin>>n;
 	int ele, pos;
 	for(int i=0;i<n;i++){
 		cin>>ele;
 		InsertLast(head,ele);
	 }
	 string command;
	while(true){
		cin>>command;
		if (command=="i"){
			cin>>ele;
			InsertLast(head, ele);
		}
		if (command=="d"){
			cin>>pos;
			Delete(head, pos);
		}
		
		if (command=="s"){
			cout<<Sum(head)<<endl;
		}
		
		if (command=="0"){
			break;
		}	
	}
	return 0;
 }
 
 
 