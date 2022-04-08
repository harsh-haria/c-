#include<iostream>
#include "a.h"
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
