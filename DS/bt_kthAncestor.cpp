#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(){
            left=NULL;
            right=NULL;
        }
        Node(int n){
            data = n;
            left = NULL;
            right = NULL;
        }
};
Node *ans;
int level;
bool helper(Node* root, int node, int k){
    if(!root) return false;
    bool left,right;
    if(root->data!=node){
        left = helper(root->left, node, k);
        right = helper(root->right, node, k);
    }
    if(root->data == node){
        return true; 
    }
    if(!left and !right) return false;
    level++;
    if(level == k){
        ans = root;
    }
    return true;
}

Node* kthAncestorDFS(Node *root, int node, int k){
    helper(root, node, k);
    if(ans) return ans;
    return NULL;
}

int main()
{
    // Let us create binary tree shown in above diagram
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->right = new Node(9);
 
    int k = 3;
    int node = 9;
    level = 0;
    ans = NULL;
    Node *parent = kthAncestorDFS(root,node,k);

    if (parent){
        cout<<parent->data;
    }
    else{
        cout << "-1";
    }
     
    return 0;
}