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

int main(){
    // node* root = new node(3);
    // cout<<root->data<<endl;
    // root->left = createNode(2);
    // root->right = createNode(3);
    // root->left->left = createNode(4);
    // root->left->right = createNode(5);
    // root->right->left = createNode(6);
    // root->right->right = createNode(7);
    // traverse_preorder(root);
    // cout<<endl;
    // traverse_inorder(root);
    // cout<<endl;
    // traverse_postorder(root);
    // cout<<endl;
    // node* x = searchLevelOrder(root,3);
    // cout<<x<<endl;
    // cout<<x->data<<endl;
    // cout<<x->left->data<<endl;
    // cout<<x->right->data<<endl;
    
    /*
    node* root = new node(1);
    // insertNode(root,createNode(1));
    insertNode(root,createNode(2));
    insertNode(root,createNode(3));
    insertNode(root,createNode(4));
    insertNode(root,createNode(5));
    insertNode(root,createNode(6));
    insertNode(root,createNode(7));

    traverse_inorder(root);
    cout<<endl;
    traverse_preorder(root);
    cout<<endl;
    cout<<root->right->left->data<<endl;
    cout<<root->left->left->data<<endl;
    */

    node* root = createNode(1);
    for(int i=2;i<=7;i++){
        insertNode(root,createNode(i));
    }   
    traverse_inorder(root);
    cout<<endl;
    deleteNode(root,7);
    deleteNode(root,6);
    deleteNode(root,9);
    deleteNode(root,1);
    traverse_inorder(root);
    cout<<endl;
}