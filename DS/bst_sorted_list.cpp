/*
Flatten BST to sorted list | Increasing order
Given a binary search tree, the task is to flatten it to a sorted list.
Precisely, the value of each node must be lesser than the values of all the nodes at its right, 
    and its left node must be NULL after flattening.
We must do it in O(H) extra space where ‘H’ is the height of BST.
*/

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left, *right;
    node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

void print(node* parent){
    node *root = parent;
    while(root){
        cout<<root->data<<" ";
        root = root->right;
    }
}

void inorder(node *root, node* &prev){
    if(!root) return;
    inorder(root->left, prev);
    prev->left = NULL;
    prev->right = root;
    prev = root;
    inorder(root->right, prev);
}

node *flatten(node* parent){
    node *dummy = new node(-1);
    node *prev = dummy;
    inorder(parent, prev);
    prev->left = NULL;
    prev->right = NULL;
    node *ret = dummy->right;
    delete dummy;
    return ret;
}

int main(){
    node *root = new node(5);
    root->left = new node(3);
    root->right = new node(7);
    root->left->left = new node(2);
    root->left->right = new node(4);
    root->right->left = new node(6);
    root->right->right = new node(8);
    print(flatten(root));
}