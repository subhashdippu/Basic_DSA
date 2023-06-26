#include <iostream>
#include <vector>
using namespace std;

struct Node{
    int data; // first argument stored in structure
    Node *left; // second argument stored in structure
    Node *right; // third argument stored in structure
    Node(int val){ // When new node is create then this constructor will work. // fourth argument stored in structure
        data = val;
        left=NULL;
        right=NULL;
    }
}; 
void inorder(Node* root){
    if(!root) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

bool cyclic(int src, int prt, vector<vector<int> >&vec, vector<bool>&visited){
    visited[src] = true;
    for(int i=0; vec.size(); i++){
        if(!visited[i]){
            if(cyclic(i, src, vec, visited)) return true;
        }
        else if(i!=prt) return true;
    }
    return false;
}
bool isTree(int n, vector<vector<int> >vec){
    vector<bool>visited(n, false);
    int s = 0;
    if(cyclic(s, -1, vec, visited)) return false;
    for(int u =0; u<n; u++){
        if(!visited[u])
        return false;
    }
    return true;
}
struct Node* Create(int val){
    Node *root = new Node(val);
    root->left = NULL;
    root->right = NULL; 
    return root;
}
int main()
{   
    // Node* node0 = new Node(0);
    // Node* node1 = new Node(1);
    // Node* node2 = new Node(2);
    // Node* node3 = new Node(3);
    // Node* node4 = new Node(4);
    // node0->right = node1;
    // node1->left = node2;
    // node1->right = node3;
    // node2->right = node4;
    // node4->left = node3;
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(5);
    Node* node4 = new Node(4);
    Node* node5 = Create(7);
    node1->left = node2;
    node1->right = node3;
    node3->left = node4;
    node4->left = node5;
    inorder(node1);
    cout<<"\n";
    vector<vector<int> >vec;
    int a = isTree(5,vec);
    cout<<a<<" ";
    return 0;
}

