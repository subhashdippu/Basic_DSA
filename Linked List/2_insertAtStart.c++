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

void insertAtStart(Node *&head, int val)
{
    Node *temp = new Node(val);
    if (!head)
    {
        head = temp;
        return;
    }
    temp->next = head;
    head = temp;
}

void insertAtIndex(Node* &head, int val, int ind){
    Node* temp = new Node(val);
    Node* ptr = head;
    int j = 0;
    while(j != ind-1){
        ptr = ptr->next;
        j++;
    }

    temp->next = ptr->next;
    ptr->next = temp;
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
Node *reverse(Node *head)
{
    Node *prev = NULL;
    Node *cur = head;
    Node *next = cur->next;
    while (cur)
    {
        cur->next = prev;
        prev = cur;
        cur = next;
        next = next->next;
    }
    return cur;
}
int main()
{
    Node *head = NULL;
    display(head);
    insertAtStart(head, 71);
    insertAtStart(head, 72);
    insertAtStart(head, 73);
    insertAtStart(head, 74);
    insertAtStart(head, 75);
    insertAtStart(head, 76);
    display(head);
    Node *newHead = reverse(head);
    display(newHead);
    return 0;
}