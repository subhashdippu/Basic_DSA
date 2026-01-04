#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
void display(Node* head){
    if(!head){
        return;
    }
    Node* ptr = head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<"\n";
};
// void insertAtIndex(Node* &head, int val, int ind){
//     Node* temp = new Node(val);
//     Node* ptr = head;
//     int j = 0;
//     while(j != ind-1){
//         ptr = ptr->next;
//         j++;
//     }

//     temp->next = ptr->next;
//     ptr->next = temp;
// }


Node* reserse(Node* &head){
    Node* temp = NULL;
    Node* cur = head;
    Node* ptr = cur->next;

    while(cur != NULL){
        cur->next = temp;
        temp = cur;
        cur = ptr;
        ptr = ptr->next;
    }
}
void insertAtEnd(Node* &head, int val){
    Node* temp = new Node(val);
    Node* ptr = head;
    while(ptr->next){
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->next = NULL;
}
Node* InsertAtStart(Node* &head, int val){
    if(!head){
        return NULL;
    }
    Node* temp = new Node(val);
    temp->next = head;
    return temp;
}
int main(){
    Node* head = new Node(51);
    head->next = new Node(52);
    head->next->next = new Node(53);
    head->next->next->next = new Node(54);
    head->next->next->next->next = new Node(55);
    head->next->next->next->next->next = new Node(56);
    head->next->next->next->next->next->next = NULL;
    display(head);
    // Node* newHead = InsertAtStart(head, 50);
    // insertAtIndex(head, 66, 2);
    // insertAtEnd(head, 66);
    reserse(head);
    display(head);
    return 0;
}