#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int val){
            data = val;
            left = NULL;
            right = NULL;
        }
};
void preorder(Node* root){
    if(!root) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root){
    if(!root) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void inorder(Node* root){
    if(!root) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    Node* root = new Node(6);
    Node* head1 = new Node(2);
    Node* head2 = new Node(3);
    Node* head3 = new Node(21);
    Node* head4 = new Node(31);
    Node* head5 = new Node(22);
    Node* head6 = new Node(34);
    root->left = head1;
    root->right = head2;
    head1->left = head3;
    head1->right = head4;
    head3->left = head5;
    head4->left = head6;
    preorder(root);
    cout<<"\n";
    postorder(root);
    cout<<"\n";
    inorder(root);
    return 0;
}