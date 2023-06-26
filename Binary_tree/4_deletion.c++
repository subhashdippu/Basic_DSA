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
    else{
        root->right = insertElement(root->right, val);
    }
    return root;
}

// Methord 1
Node* predecessor(Node* root){
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}
Node* deleteElement(Node* root, int val){
    Node* ipre; 
    if(root==NULL){
        return NULL;
    }
    if(root->left == NULL && root->right == NULL){
        free(root);
        return NULL;
    }
    if(val < root->data){
        root->left = deleteElement(root->left, val); // Here we are inserting or setting the data that's why we use root->left
    }
    else if(val > root->data){
        root->right = deleteElement(root->right, val);
    }
    else{
        ipre = predecessor(root);
        root->data = ipre->data;
        root->left = deleteElement(root->left, ipre->data);
    }
    return root;
}
// Methord 2
int SearchElement(Node* root){
    if(!root) return 0;
    if(!root->left) return root->data;
    if(root->left){
        return SearchElement(root->left);
    }
    return 0;
}
Node* DeleteElement(Node* &root, int val){
    if(!root) return root;
    if(root->data > val){
        root->left = DeleteElement(root->left, val);
    }
    else if(root->data < val){
        root->right = DeleteElement(root->right, val);
    }
    else{
        if(!root->left) return root->right;
        else if(!root->right) return root->left;
        else{
            root->data = SearchElement(root->right);
            root->right = DeleteElement(root->right, root->data);// Here we are going to delete the value from right tree
            
        }
    }
    return root;
}
// Method 3
int element(Node* root){
    if(!root) return root->data;
    while(root->left){
        root = root->left;
    }
    return root->data;
}
Node* Deletion(Node* &root, int val){
    if(!root) return root;
    if(root->data > val){
        root->left = Deletion(root->left, val);
    }
    else if(root->data < val){
        root->right = Deletion(root->right, val);
    }
    else{
        if(!root->right) return root->left;
        else if(!root->left) return root->right;
        else{
            int a = element(root->right);
            root->data = a;
            root->right = Deletion(root->right, root->data);// Here we are going to delete the value from right tree
            
        }
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
    root = insertElement(root, 9);
    insertElement(root, 8);
    insertElement(root, 3);
    insertElement(root, 2);
    insertElement(root, 7);
    insertElement(root, 6); 
    insertElement(root, 5);
    insertElement(root, 90);
    Indorded(root);
    cout<<"\n";
    DeleteElement(root, 90);
    Indorded(root);
    return 0;
}