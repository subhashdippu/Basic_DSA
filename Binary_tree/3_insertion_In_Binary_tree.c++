#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    
    Node(int val){
        data = val;
        left=NULL;
        right=NULL;
    }
};
    
Node* insertElement(Node* root, int val){
    if(root==NULL){
        return new Node(val);
    }
    if(val < root->data){
        root->left = insertElement(root->left, val); // Here we are inserting that's why we use root->left
    }
    else if(root->data == val){
        return root;
    }
    else{
        root->right = insertElement(root->right, val);
    }
    return root;
}

void Indorded(Node* root){
    if(root==NULL){
        return;
    }
    Indorded(root->left);
    cout<<root->data<<" ";
    Indorded(root->right);
}
int main()
{
    Node* root = NULL;
    root = insertElement(root, 9); // Here we just declare the first head node
    insertElement(root, 8);
    insertElement(root, 3);
    insertElement(root, 2);
    insertElement(root, 7);
    insertElement(root, 6);
    insertElement(root, 5);
    insertElement(root, 1);
    Indorded(root);
    return 0;
}