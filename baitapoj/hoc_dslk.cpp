#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *next;
};
 Node *head = NULL;
  
 Node *TaoNode(int x){
 	Node *temp = new Node();
 	temp->data = x;
 	temp->next = NULL;
 	return temp;
 }
 void InsertLast(Node *& head, int x){
 	Node* temp =TaoNode(x);
 	if(head == NULL){
 		head = temp;
	 }else{
	 	Node *p = head;
	 	while(p->next != NULL){
	 		p=p->next;
		}
		p->next = temp; 
	 }
 }
int main(){
 	int n, value, pos;
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>value;
		InsertLast(head, value);
	}
	string command;
	while(true){
		cin>>command;
		if (command=="i"){
			cin>>value;
			InsertLast(head, value);
		}
		if (command=="d"){
			cin>>pos;
			Delete(head, pos);
		}
		
		if (command=="s"){
			cout<<traversal_sum(head)<<endl;
		}
		
		if (command=="0"){
			break;
		}	
	}
	return 0;
}
 