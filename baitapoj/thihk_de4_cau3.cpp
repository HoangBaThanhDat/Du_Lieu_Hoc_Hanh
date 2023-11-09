#include<bits/stdc++.h>
using namespace std;

struct LinkedList {
	string masach;
	string tensach;
	int soluong;
	int dongia;
	struct LinkedList *next;
};

LinkedList * head;

void InsertLast(LinkedList *& head, string masach, string tensach, int soluong, int dongia)
{
	LinkedList *sach = new LinkedList;
	sach->masach = masach;
	sach->tensach = tensach;
	sach->soluong = soluong;
	sach->dongia = dongia;
	sach->next = NULL;
	if(head == NULL)
	{
		head = sach;
		return;
	}
	LinkedList *last = head;
	while(last->next != NULL)
	{
		last = last->next;
	}
	last->next = sach;
	return;
}

void DeleteLast(LinkedList *& head)
{
	LinkedList *p = new LinkedList;
	LinkedList *last = head;
	if(head == NULL)
	{
		return;
	}
	if(last->next == NULL)
	{
		delete last;
		return;
	}
	while(last->next->next != NULL)
	{
		last = last->next;
	}
	p = last->next;
	last->next = NULL;
	delete p;
	return;
}

void Count(LinkedList * head, int dongia)
{
	LinkedList *last = new LinkedList;
	last = head;
	int cnt = 0;
	while(last != NULL)
	{
		if(last->dongia <= dongia)
		{
			cnt++;
		}
		last = last->next;
	}
	cout << cnt << endl;
}

LinkedList *timkiem(LinkedList *head, string masach)
{
	LinkedList *last = head;
	while(last != NULL)
	{
		if(last->masach == masach)
		{
			return last;
		}
		last = last->next;
	}
	return NULL;
}

void TotalValue(LinkedList * head, string masach)
{
	LinkedList *p = timkiem(head, masach);
	if(p != NULL)
	{
		cout << p->soluong * p->dongia << endl;
	}
	else
	{
		cout << "-1\n";
	}
}

int main()
{
	head = NULL;
	string s;
	string ms, ts;
	int sl, dg;
	while(cin >> s)
	{
		if(s == "insert")
		{
			cin >> ms >> ts >> sl >> dg;
			InsertLast(head, ms, ts, sl, dg);
		}
		else if(s == "delete")
		{
			DeleteLast(head);
		}
		else if(s == "count")
		{
			cin >> dg;
			Count(head, dg);
		}
		else if(s == "totalvalue")
		{
			cin >> ms;
			TotalValue(head, ms);
		}
		else if(s == "finish")
		{
			return 0;
		}
	}
