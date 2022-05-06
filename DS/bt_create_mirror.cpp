#include<iostream>
using namespace std;
#include "bt_intro.cpp"

// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(){
//         left = NULL;
//         right = NULL;
//     }
//     node(int x){
//         data = x;
//         left = NULL;
//         right = NULL;
//     }
//     node* create_mirror(node* root, node* mi){
//         if(!root){
//             return mi;
//         }
//         mi->left = root->right;
//         mi->right = root->left;
//         create_mirror(root->left, mi->right);
//         create_mirror(root->right, mi->left);
//         return mi;
//     }
// };

node* create_mirror(node* root, node* &mi){
    if(!root){
        return root;
    }
    // cout<<root->data<<" ";
    if(root->right){
        mi->left = createNode(root->right->data);
    }
    if(root->left){
        mi->right = createNode(root->left->data);
    }
    create_mirror(root->left, mi->right);
    create_mirror(root->right, mi->left);
    return mi;
}

int main(){
    node* root = createNode(2);
    root->left = createNode(1);
    root->right = createNode(8);
    root->left->left = createNode(12);
    root->right->right = createNode(9);
    traverse_inorder(root);
    node* mi = createNode(root->data);
    cout<<endl;
    node* ni = create_mirror(root,mi);
    traverse_inorder(ni);
}