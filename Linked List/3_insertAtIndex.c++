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

void insertAtIndex(Node *&head, int val, int ind)
{
    int i = 0;
    Node *n = head;
    Node *temp = new Node(val);
    while (i != ind - 1)
    {
        n = n->next;
        i++;
    }
    temp->next = n->next;
    n->next = temp;
}
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{

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
    // display(head);
    insertAtIndex(head, 57, 2);
    display(head);

    return 0;
}