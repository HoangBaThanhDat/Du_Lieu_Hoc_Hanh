#include <iostream>
#include <string>
using namespace std;

struct Node {
string masv;
float dtb;
Node* next;
};

void InsertFirst(Node*& head, string masv, float dtb) {
// Ki?m tra xem n?u ma sinh vien da t?n t?i thi khong them vao danh sach
Node* p = head;
while (p != NULL) {
if (p->masv == masv) return;
p = p->next;
}

Node* new_node = new Node;
new_node->masv = masv;
new_node->dtb = dtb;
new_node->next = head;
head = new_node;
}

void Delete(Node*& head, string masv) {
Node* p = head;
Node* prev = NULL;
while (p != NULL) {
if (p->masv == masv) {
if (prev == NULL) {
// Xoa ph?n t? d?u danh sach
head = p->next;
}
else {
prev->next = p->next;
}
delete p;
return;
}
prev = p;
p = p->next;
}
}

int Count(Node* head, float dtb) {
int count = 0;
Node* p = head;
while (p != NULL) {
if (p->dtb >= dtb) {
count++;
}
p = p->next;
}
return count;
}

int main() {
Node* head = NULL;

string command;
while (cin >> command) {
    if (command == "Add") {
        string masv;
        float dtb;
        cin >> masv >> dtb;
        InsertFirst(head, masv, dtb);
    }
    else if (command == "Del") {
        string masv;
        cin >> masv;
        Delete(head, masv);
    }
    else if (command == "Count") {
        float dtb;
        cin >> dtb;
        cout << Count(head, dtb) << endl;
    }
    else if (command == "Fin") {
        break;
    }
}

return 0;
}