#include <iostream>
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

struct Node* Create(int val){
    Node *root = new Node(val);
    root->left = NULL;
    root->right = NULL; 
    return root;
}
int LargestSubTree(Node* root, int &ans){
    int cur = 0;
    if(!root) return 0;
    cur = root->data + LargestSubTree(root->left, ans) + LargestSubTree(root->right, ans);
    ans = max(ans, cur);
    return ans;
}
int largestSum(Node* root){
    int maxEl = INT_MIN;
    if(!root) return 0;
    LargestSubTree(root, maxEl);
    return maxEl;
}
int main()
{
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(5);
    Node* node4 = new Node(4);
    Node* node5 = Create(7);
    node1->left = node2;
    node1->right = node3;
    node3->left = node4;
    node4->left = node5;
    int a = largestSum(node1);
    cout<<a<<" ";
    return 0;
}

