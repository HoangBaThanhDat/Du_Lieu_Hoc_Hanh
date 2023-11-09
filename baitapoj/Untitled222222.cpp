#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
node * head = NULL;
node *createnode(int value){
	node *temp = new node();
	temp->data =value;
	temp->next=NULL;
	return temp;
}
void insertfirst(node *&head, int value){
	node* temp =createnode(value);
	if(head==NULL){
		head=temp;
	}else{
		temp->next=head;
		head = temp;
	}
}
void deletefirst(node *&head){
	if(head != NULL){
		head = head->next;
	}
}
int traversal_sum(node *head){
	int s=0;
	node *temp=head;
	while(temp != NULL){
		s += temp->data;
		temp=temp->next;
	}
	return s;
}
int main(){
	string command;
	int value;
	while(true){
		cin>>command;
		if(command=="add"){
			cin>>value;
			insertfirst(head,value);
		}
		if(command=="del"){
			deletefirst(head);
		}
		if(command=="sum"){
			cout<<traversal_sum(head)<<endl;
		}
		if(command=="finish"){
			break;
		}
	}
	
}