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

void display(Node*head1){
    Node* temp =  head1;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
}
void insertAtEnd(Node *&head, Node* node)
{
    if (head == NULL)
    {
        head = node;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = node;
    node->prev = temp;
}
void InsertionAtStart(Node* &head, int val){
    Node* node = new Node(val);
    node->next = head;
    head->prev = node;
    head = node; 
}
void InsertAtIndex(Node* &head, int index, int val){
    int i = 0;
    Node* temp = head;
    Node* node = new Node(val);
    while(i<index-1){
        temp = temp->next;
        i++;
    }
    node->next = temp->next;
    node->next->prev = node;
    temp->next = node;
    node->prev = temp;
}
void Insertion(Node* &head, int val){
     
}
void display1(Node*head6){
    Node* temp =  head6;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->prev;
    }
    cout<<"\n";
}
int main(){
    Node* head1 = new Node(1);
    Node* head2 = new Node(2);
    Node* head3 = new Node(3);
    Node* head4 = new Node(4);
    Node* head5 = new Node(5);
    Node* head6 = new Node(6);
    head1->next = head2;
    head2->prev = head1;
    head2->next = head3;
    head3->next = head4;
    head3->prev = head2;
    head4->prev = head3;
    head4->next = head5;
    head5->next = head6;
    head5->prev = head4;
    head6->prev = head5;
    // display(head1);
    // display1(head6);
    // cout<<"\n";
    // Node* node = new Node(7);
    // insertAtEnd(head1,node);
    InsertionAtStart(head1, 8);
    // InsertAtIndex(head1, 3, 8);
    display(head1);
    display1(head6);
    return 0;
}