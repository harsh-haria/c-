#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node * next;

        node(int n){
            data = n;
            next = NULL;
        }
};

void insertAtTale(node*&head,int val){
    node * n = new node(val);
    if(head==NULL){
        head = n;
        return;
    }

    node * temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
    return;
}

void display(node * head){
    node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}



int main(){
    node * head = NULL;
    int arr[] = {1,2,3,4,5,6,9};
    for(auto i:arr){
        insertAtTale(head,i);
    }
    display(head);
}