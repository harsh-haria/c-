#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(){
        left=NULL;
        right=NULL;
    }
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

void traverse_inorder(node* root){  //DFT
    if(root){
        traverse_inorder(root->left);
        cout<<root->data<<" ";
        traverse_inorder(root->right);
    }
}

void traverse_preorder(node* root){ //DFT
    if(root){
        cout<<root->data<<" ";
        traverse_preorder(root->left);
        traverse_preorder(root->right);
    }
}

void traverse_postorder(node* root){ //DFT
    if(root){
        traverse_postorder(root->left);
        traverse_postorder(root->right);
        cout<<root->data<<" ";
    }
}

node* searchLevelOrder(node* root, int key){//also called as BFT
    if(!root){
        return NULL;
    }
    queue<node*> q;
    node* out =  NULL;
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp->data == key){
            out = temp;
            cout<<"HIT"<<endl;
        }
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    return out;
}

void BFS(node* root){
    if(!root){
        return;
    }
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}

string BFSRecursive(node* root, int level){
    if(!root){
        return "-";
    }
    if(level == 1){
        return to_string(root->data);
    }
    if(level>1){
        return BFSRecursive(root->left, level-1) + " " + BFSRecursive(root->right, level-1);
    }
    return "";
}

void printMyTree(node* root, int height){
    if(height == 0){
        return;
    }
    printMyTree(root,height-1);
    cout<<BFSRecursive(root,height)<<" ";
}

void insertNode(node* &root, node* nod){
    if(!root){
        root = nod;
        return;
    }
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(!temp->left){
            temp->left = nod;
            return;
        }
        else{
            q.push(temp->left);
        }
        if(!temp->right){
            temp->right = nod;
            return;
        }
        else{
            q.push(temp->right);
        }
    }
}

void deleteExtremeRightNode(node* root, node* extremeRight){
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp->left and temp->left==extremeRight){
            temp->left = NULL;
            return;
        }
        else{
            q.push(temp->left);
        }
        if(temp->right and temp->right==extremeRight){
            temp->right = NULL;
            return;
        }
        else{
            q.push(temp->right);
        }
    }
}

node* getRightmostElement(node* root){
    if(!root){
        return root;
    }
    queue<node*> q;
    q.push(root);
    node* out;
    while(!q.empty()){
        node* temp = q.front();
        out = temp;
        q.pop();
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    return out;
}

void deleteNode(node* root, int key){
    node* nodeToDelete = searchLevelOrder(root,key);
    if(!nodeToDelete){
        cout<<"No such element found!  :("<<endl;
        return;
    }
    queue<node*> q;
    q.push(root);
    node* temp;
    while(!q.empty()){
        temp = q.front();
        q.pop();
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    //now temp is at the deepest and rightmost element
    int extremeKey = temp->data;
    deleteExtremeRightNode(root, temp);
    nodeToDelete->data = extremeKey;
}

void maxNode(node* root, int* max){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    if(*max < root->data){
        *max = root->data;
        cout<<"update\n";
    }

    maxNode(root->left,max);
    maxNode(root->right,max);
}

int number_of_nodes(node* root){
    if(!root){
        return 0;
    }
    return 1 + number_of_nodes(root->left) + number_of_nodes(root->right);
}

int number_of_non_leaves(node* root){
    if(root){
        if(root->left==NULL and root->right==NULL){
            return 0;
        }
        return 1 + number_of_non_leaves(root->left) + number_of_non_leaves(root->right);
    }
    return 0;
}

int number_of_leaves(node* root){
    if(root){
        if(root->left==NULL and root->right==NULL){
            return 1;
        }
        return number_of_leaves(root->left) + number_of_leaves(root->right);
    }
    return 0;
}

int number_of_full_nodes_REC(node* root){
    if(!root or (!root->left and !root->right)){
        return 0;
    }
    if(root->left and root->right){
        return 1 + number_of_full_nodes_REC(root->left) + number_of_full_nodes_REC(root->right);
    }
    return number_of_full_nodes_REC(root->left) + number_of_full_nodes_REC(root->right);
}

int height_of_tree(node* root){
    if(!root ){
        return 0;
    }
    int l = height_of_tree(root->left);
    int r = height_of_tree(root->right);
    return 1 + max(l,r);
    
}

int SUM(node* root){
    if(!root){
        return 0;
    }
    return root->data + SUM(root->left) + SUM(root->right);
}

int diameter1(node* root){
    //time complexity: O(N*N)
    if(!root){
        return 0;
    }
    int diam1 = height_of_tree(root->left);
    int diam2 = height_of_tree(root->right);
    cout<<"Height of left and right is: "<<diam1<<" "<<diam2<<endl;
    int a = 0, b = 0;
    a =  diameter1(root->left);
    b = diameter1(root->right);
    cout<<"returnable: "<<root->data<<"  "<<a<<" "<<b<<" "<<1+diam1+diam2<<endl;
    return max(max(a,b),1+diam1+diam2);
}



