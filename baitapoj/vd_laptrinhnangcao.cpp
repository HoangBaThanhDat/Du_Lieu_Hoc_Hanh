   #include<bits/stdc++.h>
  using namespace std;
  struct sach{
  	char masach[6];
  	char tensach[50];
  	char tacgia[30];
  	int soluong;
  };
int main(){
sach DS[100];
int n;cin>>n;
int oki;
  	for(int i=1;i<=n;i++){
  		    fflush(stdin);
  	    do{
  		   oki=0;
  		   cout<<"nhap ma sach :";gets(DS[i].masach);
		   for(int j=0;j<i;j++){
			    if(strcmp(DS[j].masach,DS[i].masach)==0){
				    oki=1;	break;
			   }
		   }
	    }while (oki==1);	
  	        cout<<"nhap ten sach :";gets(DS[i].tensach);
  		    cout<<"nhap tac gia :";gets(DS[i].tacgia);
  		    cout<<"nhap so luong :";cin>>DS[i].soluong;
   }
   for(int i=1;i<=n;i++){
   	    cout<<DS[i].masach<<"__"<<DS[i].tensach<<"__"<<DS[i].tacgia<<"__"<<DS[i].soluong<<"\n";
   }
    for(int i=1;i<=n;i++){
    	if(DS[i].soluong>=3)		
   	    cout<<DS[i].masach<<"__"<<DS[i].tensach<<"__"<<DS[i].tacgia<<"__"<<DS[i].soluong<<"\n";
   }
} 
