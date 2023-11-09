
#include<bits/stdc++.h>
using namespace std;
struct Node {
	string masv;
	float dtb;
	Node *next;
};

Node *head;

void InsertFirst(Node *& head, string masv, float dtb)
{
	Node *p = new Node;
	p->masv = masv;
	p->dtb = dtb;
	p->next = head;
	head = p;
}

void Delete(Node *& head, string masv)
{
	Node *pre = new Node;
	pre = head;
	if(head == NULL)
		return;
	if(pre->masv == masv)
	{
		head = pre->next;
		delete pre;
		return;
	}
	while(pre != NULL)
	{
		Node *p = new Node;
		p = pre->next;
		if(pre->next->masv == masv)
		{
			pre->next = pre->next->next;
			delete p;
		}
		pre = pre->next;
	}
}

int Count(Node *head, float dtb)
{
	
	Node *last = new Node;
	last = head;
	if(head == NULL)
		return 0;
	int cnt = 0;
	while(last != NULL)
	{
		if(last->dtb >= dtb)
		{
			cnt++;
		}
		last = last->next;
	}
	return cnt;
}

int main()
{
	string s;
	string k;
	head = NULL;
	float dtb;
	while(cin >> s)
	{
		if(s == "Add")
		{
			cin >> k >> dtb;
			InsertFirst(head, k, dtb);
		}
		else if(s == "Del")
		{
			cin >> k;
			Delete(head, k);
		}
		else if(s == "Count")
		{
			cin >> dtb;
			cout << Count(head, dtb) << endl;
		}
		else if(s == "Fin")
		{
			return 0;
		}
	}
}