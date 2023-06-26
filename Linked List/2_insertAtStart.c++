#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtStart(Node* &head, int val)
{
    Node *temp = new Node(val);
    if(!head){
        temp = head;
        return;
    } 
    temp->next = head;
    head = temp;
}

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = new Node(5);
    Node *second = new Node(51);
    Node *third = new Node(52);
    Node *forth = new Node(53);
    Node *five = new Node(54);
    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = five;
    five->next = NULL;
    insertAtStart(head, 7);
    display(head);
    return 0;
}