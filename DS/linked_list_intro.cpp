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

void deleteNode(node* temp){
    if(temp->next==NULL){
        delete temp;
    }
    while(temp->next->next!=NULL){

    }
}

node* reverse_without_rec(node* &head){
    node* prev = NULL;
    node* curr = head;
    node* next = NULL;
    while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

node* reverse_with_rec(node* &head){
    if(head==NULL or head->next==NULL){
        return head;
    }
    node* newhead = reverse_with_rec(head->next);
    (head->next)->next = head;
    head->next = NULL;
    return newhead;
}

// int main(){
//     node * head = NULL;
//     insertAtTale(head,1);
//     insertAtTale(head,2);
//     insertAtTale(head,3);
//     display(head);
//     insertAtHead(head,0);
//     display(head);
//     insertAtHead(head,4);
//     display(head);
//     cout<<searchList(head, 5)<<endl;
//     cout<<searchList(head,0)<<endl;
//     deleteNode(head,3);
//     display(head);
//     deleteNode(head,1);
//     display(head);
//     deleteNode(head,4);
//     display(head);
// }
