//arrange the nodes of the linked list in a odd even order 
#include<iostream>
// #include "a.h"
using namespace std;
//program is still buggy
class node{
    public:
        int data;
        node * next;

        node(int n){
            data = n;
            next = NULL;
        }
};

void insertAtHead(node * &head, int val){
    node * n = new node(val);
    n->next = head;
    head = n;
}

void insertAtTale(node * &head, int val){// &head bcz we will be modifying the head
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
    //no need to put null in n->next bcz we have already did it in constructor
}

void display(node * head){// only head here bcz we will just traverse the list
    node * temp = head; //no need to do this. we could have also used head as we are just taking the refernce of head
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

bool searchList(node * head, int key){
    node * temp = head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deleteNode(node * &head, int val){

    if(head==NULL){
        cout<<"Nothing to Delete"<<endl;
        return;
    }

    node * temp = head;
    if(temp->data==val){
        node * headtodelete = head;
        head = temp->next;
        delete headtodelete; //helps to avoid memory leak
        return;
    }
    while((temp->next)->data!=val){
        temp = temp->next;
    }
    node * todelete = temp->next;
    temp->next = (temp->next)->next;
    delete todelete; //works like free() we had in c which is used to free the space in heap
}

node* odd_even(node * &head){
    node * temp = head;
    node * odd = head;
    node * even = head->next;
    node * evenStart = even;
    while(odd->next!=NULL && even->next!=NULL){
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenStart;
    if(odd->next!=NULL){
        even->next = NULL;
    }
    return temp;
    // cout<<"DEBUG OUTPUT 2"<<endl;
    if(odd->next->next==NULL && even->next==NULL){
        odd->next = evenStart;
        return temp;
    }
    if(odd->next==NULL && even->next->next==NULL){
        odd->next = evenStart;
        even->next = NULL;
        return temp;
    }
    cout<<"DEBUG OUTPUT 3"<<endl;
    return temp;
}

int main(){
    node * head = NULL;
    node * newhead = NULL;
    for(int i=1;i<=7;i++){
        insertAtTale(head,i);
    }
    display(head);
    newhead = odd_even(head);
    display(newhead);
}