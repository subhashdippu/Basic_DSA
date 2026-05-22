// Radha


#include<iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node * next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void display(Node * head){
    Node* ptr = head;
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}
Node* reverse(Node* &head){
    Node * cur = head;
    Node * prev = NULL;
    
    while(cur != NULL){
        Node* next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}
int main(){
    Node * node1 = new Node(51);
    Node * node2 = new Node(52);
    Node * node3 = new Node(53);
    Node * node4 = new Node(54);
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;
    display(node1);
    cout<<"\n";
    Node* newHead = reverse(node1);
    display(newHead);
}
