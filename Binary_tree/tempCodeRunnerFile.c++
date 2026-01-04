#include<iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node* prev;
        Node* next;

        Node(int val){
            data = val;
            prev = NULL;
            next = NULL;
        }
};

void inOrder(Node* head1){
    if(!head1) return;
    inOrder(head1->prev);
    cout<<head1->data<<" ";
    inOrder(head1->next);
}
int main(){
    Node* head1 = new Node(51);
    Node* head2 = new Node(52);
    Node* head3 = new Node(53);
    Node* head4 = new Node(54);
    Node* head5 = new Node(55);
    Node* head6 = new Node(56);
    Node* head7 = new Node(57);
    head1->next = head2;

    head2->prev = head3;
    head3->next = head4;

    head3->prev = head5;
    head5->next = head6;

    head6->prev = head7;
    
    head7->next = NULL;

    inOrder(head1);
    return 0;   
}