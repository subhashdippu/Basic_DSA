#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// class node{
//     public:
//     int data;
//     node* next;
//     node(int val){
//         data = val;
//         next = NULL;
//     }
// }

void insert(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = n;
}
void display(node *head)
{
    node *ptr = head;
    while (ptr->next)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}
int main()
{
    node *head = new node(5);
    node *second = new node(51);
    node *third = new node(52);
    node *forth = new node(53);
    node *five = new node(54);
    // insert(head, 6);
    // insert(head, 4);
    // insert(head, 5);
    // insert(head, 3);
    // display(head);
    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = five;
    five->next = NULL;
    display(head);
    return 0;
}
