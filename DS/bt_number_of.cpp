#include<iostream>
#include "bt_intro.cpp"
using namespace std;



int main(){
    node* root = createNode(1);
    for(int i=2;i<=7;i++){
        insertNode(root,createNode(i));
    }
    insertNode(root,createNode(8));
    insertNode(root,createNode(9));
    
    cout<< "Nodes: " << number_of_nodes(root) <<endl;
    cout<< "Non-Leaves: " << number_of_non_leaves(root) <<endl;
    cout<< "Leaves: " << number_of_leaves(root) <<endl;
    cout<< "Full Nodes: " << number_of_full_nodes_REC(root) <<endl;
    cout<< "Height: " << height_of_tree(root) <<endl;
}