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

void display(Node *head)
{
    Node *temp = head;
    int i = 1;
    while (!temp->next)
    {
        cout << temp->data << " " << i << "\n";
        temp = temp->next;
        i++;
    }
    cout << endl;
}
void findMiddle(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast and fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << slow->data << " ";
}
int main()
{
    Node *head = NULL;
    // display(head);
    insertAtStart(head, 71);
    insertAtStart(head, 72);
    insertAtStart(head, 73);
    insertAtStart(head, 74);
    insertAtStart(head, 75);
    insertAtStart(head, 76);
    // insertAtStart(head, 7);
    display(head);
    // findMiddle(head);
    return 0;
}