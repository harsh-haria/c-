#include<iostream>
using namespace std;
#include "bt_intro.cpp"


int main(){
    node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->right = createNode(6);
    BFS(root);
    cout<<endl;
    cout<<SUM(root)<<endl;
}