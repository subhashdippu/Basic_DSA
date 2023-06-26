#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data = val;
            next=NULL;
        }
};

void insert(Node* &head, int val){
    Node* n = new Node(val);
    if(head==NULL){
        head = n;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void insertAtNode(Node* head, Node* insert, int val){
    Node* temp = new Node(val);
    temp->next = insert->next;
    insert->next = temp;
}
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head = new Node(5);
    Node* second = new Node(51);
    Node* third = new Node(52);
    Node* forth = new Node(53);
    Node* five = new Node(54);
    // insert(head, 6);
    // insert(head, 4);
    // insert(head, 5);
    // insert(head, 3);
    // display(head);
    head->next=second;
    second->next = third;
    third->next = forth;
    forth->next = five;
    five->next = NULL;
    Node* node = head;
    insertAtNode(head, node, 4);
    display(head);
    return 0;
}