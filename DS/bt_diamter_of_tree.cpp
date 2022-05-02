#include<iostream>
using namespace std;
#include "bt_intro.cpp"

class TreeInfo{
    public:
    int ht;
    int diam;
    TreeInfo(int height, int diameter){
        ht = height;
        diam = diameter;
    }
    int getDiameter(){
        return diam;
    }
};

TreeInfo diameter2(node* root){
    if(!root){
        new TreeInfo(0,0);
    }

    TreeInfo left = diameter2(root->left);
    TreeInfo right = diameter2(root->right);

    int myHeight = max(left.ht, right.ht) + 1;

    int diam1 = left.diam;
    int diam2 = right.diam;
    int diam3 = left.ht + right.ht + 1;

    int myDiam = max(diam3, max(diam1,diam2));

    TreeInfo myInfo = TreeInfo(myHeight,myDiam);
    return myInfo;
}

int main(){
    node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->right = createNode(6);
    BFS(root);
    cout<<endl;
    // int var = diameter1(root);
    // cout<<"Diameter is: "<<var<<endl;
    // cout<<height_of_tree(root);
    cout<<diameter2(root).diam<<endl;
}