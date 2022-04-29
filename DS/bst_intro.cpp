#include<iostream>
#include "bt_intro.cpp"
using namespace std;

void insertBst(node* &root, int key){
    // cout<<root->data<<" ";
    if(root->data>=key){
        if(!root->left){
            root->left = createNode(key);
            return;
        }
        insertBst(root->left,key);
    }
    if(root->data<key){
        if(!root->right){
            root->right = createNode(key);
            return;
        }
        insertBst(root->right,key);
    }
}

void searchBst(node* root, int key){
    if(root->data > key){
        if(root->left){
            searchBst(root->left,key);
        }
        else{
            cout<<endl<<"Not Found!"<<endl;
            return;
        }
    }
    if(root->data < key){
        if(root->right){
            searchBst(root->right,key);
        }
        else{
            cout<<endl<<"Not Found!"<<endl;
            return;
        }
    }
    if(root->data == key){
        cout<<endl<<"Found Key "<<key<<endl;
    }
}



int main(){
    node* root = createNode(8);
    root->left = createNode(4);
    root->right = createNode(10);
    root->left->left = createNode(2);
    root->left->right = createNode(6);
    root->right->right = createNode(16);
    root->right->right->left = createNode(15);
    root->left->right->left = createNode(5);
    root->left->right->right = createNode(7);
    BFS(root);
    deleteBst(root,7);
    cout<<endl;
    BFS(root);
    cout<<endl;
    // traverse_inorder(root);
}