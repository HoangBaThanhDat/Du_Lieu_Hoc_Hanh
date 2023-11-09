#	include <iostream>
#include <stdlib.h>
using namespace std;

struct Songuyen  			
{
	int N;
	Songuyen *next;
};

Songuyen *Nhap(Songuyen *f)
{
	int k;
	Songuyen *p;
	f = NULL;  //tao danh sach rong
	do						
	{   cout<<"Nhap mot so nguyen (0 dung lai): ";
		cin>>k;
		if (k == 0)
			break;
		//tao nut moi co ten la p 
		p = new Songuyen;	//cap phat vung nho cho nut moi p	
		p->N = k;  //gan d lieu cho nut p
		p->next = NULL;
		//gan nut moi p vao dau danh sach
		
		if (f == NULL)  //danh sach rong
		   f = p;
		else 
		 {
		   p->next = f;
	       f = p;
	     }
	} while (1);
	return f;
}
//In theo tu nut dau den nut cuoi
void  In(Songuyen *f)		
{
	Songuyen *p;
	p = f;
	while (p!=NULL)			
	{
		cout<<p->N<<"  ";
		p = p->next;  //p tro qua nut ke tiep
	}
	cout<<"\n";
}

//Bo sung nut co gia tri X vao cuoi danh sach
Songuyen *BSCuoi(Songuyen *f, int X)
{  
    //tao nut moi co ten la q
	Songuyen *q;
    q = new Songuyen;  //tao nut moi q
    q->N = X;
    q->next = NULL;
    
    //bo sung cuoi
	if (f == NULL)   //neu danh sach rong 
	    f = q;
    else
    {
		Songuyen *p = f;
        while (p->next != NULL) //chuyen p ve nut cuoi
            p = p->next;
        p->next = q;
    }
	return f;
}
//tim nut co gia tri X, tra ve con tro toi nut tim duoc 
//hoac tra ve NULL neu khong tim thay


Songuyen *timkiem(Songuyen *first, int X)
{   
	Songuyen *p;
	for (p=first; p!=NULL; p = p->next)
		if (p->N == X)
			return p;  //tro vao nut tim duoc
	return NULL;  //khong tim thay
}

//xoa nut dau tien co gia tri X
Songuyen *Xoa(Songuyen *f, int X)
{
   Songuyen *p, *pre;
   //tim kiem nut co gia tri X
   p = f;
   p = timkiem(f,X);

    if (p != NULL)  //tim duoc nut can xoa la p 
		if (p == f)   //nut p cân xoa la nut dau
	    {    
		    f = f->next;
		    delete p;
	    }
    	else       
        {
			pre = f;
			while (pre ->next != p) //tim nut pre ngay truoc nut p
				pre = pre ->next;
			pre ->next = p->next; //thay doi lien ket
			delete p;
		}
	return f;
}

void Sapxep(Songuyen * f)
{	Songuyen *p, *q;
	int tam;
	for (p = f; p != NULL; p = p->next)
	   for (q = p->next; q != NULL; q = q->next)
	   	if (p->N > q->N)
		  {   
		       tam = p->N;
		       p->N = q->N;
		       q->N = tam;
		  }
}

int main()
{
	Songuyen *first; int X;
    
	cout<<"\n Danh sach so nguyen da nhap: ";
	
	first = Nhap(first);
    In(first); 
    
	
	cout<<"\n Nhap mot so nguyen: ";
    cin>>X;
    first = BSCuoi(first, X);
    
	cout<<"\n Danh sach so nguyen da bo sung: ";
    In(first);
   
	cout<<"\n Nhap gia tri can xoa: ";
	cin>>X;
	
	first = Xoa(first,X);	  
	
	cout<<"\n Danh sach so nguyen sau khi xoa: ";
    In(first);
	
    Sapxep(first);
	cout<<"\n Danh sach so nguyen sau khi sap xep: ";
    In(first);
    
	return 0;
}