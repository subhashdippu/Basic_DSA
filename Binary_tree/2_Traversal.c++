#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

struct Node *insert(int val){
    Node* node = new Node(val);
    node->left = NULL;
    node->right = NULL;
    return node;
}
void preorder(Node* root){
    if(!root) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
} 
void inorder(Node* root){
    if(!root) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(Node* root){
    if(!root) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){

    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);
    Node* node5 = new Node(5);
    Node* node6 = new Node(6);
    Node* node7 = insert(7);
    node1->right = node2;
    node1->left = node3;
    node3->right = node4;
    node3->left = node5;
    node2->left = node6;
    node6->left = node7;
    preorder(node1);
    cout<<"\n";
    inorder(node1);
    cout<<"\n";
    postorder(node1);
    return 0;
}