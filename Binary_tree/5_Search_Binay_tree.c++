#include <iostream>
using namespace std;
// Why we se binary search tree
// Binary search tree is used for get range data like forn 10 to 20
// Binary search tree is used fot structured data
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
    else{
        root->right = insertElement(root->right, val);
    }
    return root;
}
// // Method 1
Node* serachElement(Node* root, int val){
    if(root==NULL){
        return NULL;
    }
    if(root->data == val){
        return root;
    }
    if(val < root->data){
        return serachElement(root->left, val); 
    }
    else{
        return serachElement(root->right, val);
    }
    return NULL;
}

// iterative Method 
Node* iterativeSerachElement(Node* root, int val){
    while(root!=NULL){
        if(root->data == val){
            return root;
        }
        else if(val < root->data){
            root = root->left; // Here we are inserting that's why we use root->left
        }
        else{
            root = root->right;
        }
    }
    return NULL;// If the given element is NULL then it returns NULL  
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
    root = insertElement(root, 9);
    insertElement(root, 8);
    insertElement(root, 3);
    insertElement(root, 2);
    insertElement(root, 7);
    insertElement(root, 6);
    insertElement(root, 5);
    Indorded(root);
    cout<<"\n";
    // Node* n = iterativeSerachElement(root, 8);
    Node* n = iterativeSerachElement(root, 6);
    cout<<n->data;
    
    return 0;
}