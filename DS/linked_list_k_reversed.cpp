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

void display(node * head){// only head here bcz we will just traverse the list
    node * temp = head; //no need to do this. we could have also used head as we are just taking the refernce of head
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

node* reverseK(node * &head, int k){
    node * prev = NULL;
    node * current = head;
    node * nextptr;
    int count = 0;
    while(current!=NULL && count<k){
        nextptr = current->next;
        current->next = prev;
        prev = current;
        current = nextptr;
        count++;
    }//till here first k nodes have been reversed

    if(nextptr!=NULL){
        head->next  = reverseK(nextptr,k);
    }
    return prev;
}

int main(){
    node * head = NULL;
    // insertAtTale(head,1);
    // insertAtTale(head,2);
    // insertAtTale(head,3);
    // insertAtTale(head,4);
    // insertAtTale(head,5);
    // insertAtTale(head,6);
    // insertAtTale(head,7);
    // insertAtTale(head,8);
    for(int i=1;i<=10;i++){
        insertAtTale(head,i);
    }
    display(head);
    node *newhead = reverseK(head,2);
    display(newhead);
}