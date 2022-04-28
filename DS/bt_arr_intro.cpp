#include<iostream>
using namespace std;
#define capacity 10

class BinaryTree{
    public:
        int A[capacity];
        int currentSize;
        BinaryTree();
        int getLeft(int);
        int getRight(int);
        int getParent(int);
        bool isEmpty();
        int searchKey(int);
        void deleteKey();
        void insertKey(int);
        void printMyTree();
};
BinaryTree::BinaryTree(){
    currentSize = 0;
    for(auto &i:A){
        i=0;
    }
}
int BinaryTree::getLeft(int x){
    return x*2 + 1;
}
int BinaryTree::getRight(int x){
    return x*2 + 2;
}
int BinaryTree::getParent(int x){
    return (x-1)/2;
}
bool BinaryTree::isEmpty(){
    if(currentSize==0){
        return true;
    }
    return false;
}
int BinaryTree::searchKey(int key){
    for(int i=0;i<currentSize;i++){
        if(A[i]==key){
            return i;
        }
    }
    return -1;
}
void BinaryTree::deleteKey(){
    currentSize--;
}
void BinaryTree::insertKey(int key){
    if(currentSize == capacity){
        cout<<"OverFlow :("<<endl;
        return;
    }
    currentSize++;
    A[currentSize-1] = key;
}
void BinaryTree::printMyTree(){
    for(int i=0;i<currentSize;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main(){
    BinaryTree x;
    x.insertKey(1);
    x.insertKey(2);
    x.insertKey(3);
    x.insertKey(4);
    x.insertKey(5);
    x.insertKey(6);
    x.insertKey(7);
    x.insertKey(8);
    x.insertKey(9);
    x.printMyTree();
    cout<<x.A[x.getLeft(1)]<<endl;
    cout<<x.getRight(3)<<endl;
    x.printMyTree();
    // x.insertKey(10);
    // x.printMyTree();
    x.deleteKey();
    x.printMyTree();
    cout<< x.getParent(5) <<endl;
}