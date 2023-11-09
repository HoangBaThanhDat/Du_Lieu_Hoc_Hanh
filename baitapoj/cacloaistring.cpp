#include <iostream> 
#include <cstring> 
using namespace std; 
int main () 
{ 
   char chuoi1[10] = "Hello"; 
   char chuoi2[10] = "Christmas"; 
   char chuoi3[10]; 
   int len; 

   // sao chep chuoi1 vao trong chuoi3 
   strcpy(chuoi3, chuoi1); 
   cout << "strcpy(chuoi3, chuoi1): " << chuoi3 << endl; 

   // noi hai chuoi: chuoi1 va chuoi2 
   strcat(chuoi1, chuoi2); 
   cout << "strcat(chuoi1, chuoi2): " << chuoi1 << endl; 
   
   // tong do dai cua chuoi1 mot sau khi thuc hien noi chuoi 
   len = strlen(chuoi1); 
   cout << "Dung ham strlen(chuoi1) de tinh do dai chuoi1: " << len << endl;
   
      // sao chep chuoi1 vao trong chuoi3 
    chuoi3 = chuoi1; 
    cout << "Bay gio chuoi3 la: " << chuoi3 << endl; 

    // noi hai chuoi: chuoi1 va chuoi2 
    chuoi3 = chuoi1 + chuoi2; 
    cout << "chuoi1 + chuoi2 co ket qua la: " << chuoi3 << endl; 

    // tong do dai cua chuoi3 mot sau khi thuc hien noi chuoi 
    len = chuoi3.size(); 
    cout << "Tinh do dai voi ham chuoi3.size(): " << len << endl; 
   return 0; 
}