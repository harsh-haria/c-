#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};

node* createNode(int x){
    node* temp = new node(x);
    return temp;
}

void traverse_inorder(node* root){
    if(root){
        traverse_inorder(root->left);
        cout<<root->data<<" ";
        traverse_inorder(root->right);
    }
}

void traverse_preorder(node* root){
    if(root){
        cout<<root->data<<" ";
        traverse_preorder(root->left);
        traverse_preorder(root->right);
    }
}

void traverse_postorder(node* root){
    if(root){
        traverse_postorder(root->left);
        traverse_postorder(root->right);
        cout<<root->data<<" ";
    }
}

int main(){
    node* root = new node(1);
    // cout<<root->data<<endl;
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    traverse_preorder(root);
    cout<<endl;
    traverse_inorder(root);
    cout<<endl;
    traverse_postorder(root);

}