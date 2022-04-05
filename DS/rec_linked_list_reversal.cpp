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

node* reverseArrayRec(node * &head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    node * newhead = reverseArrayRec(head->next);
    (head->next)->next = head;
    head->next = NULL;

    return newhead;
}

void display(node * head){// only head here bcz we will just traverse the list
    node * temp = head; //no need to do this. we could have also used head as we are just taking the refernce of head
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node * head = NULL;
    insertAtTale(head,1);
    insertAtTale(head,2);
    insertAtTale(head,3);
    insertAtTale(head,4);
    insertAtTale(head,5);
    display(head);
    node *newhead = reverseArrayRec(head);
    display(newhead);
}