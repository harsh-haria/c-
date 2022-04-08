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

void insertAtHead(node *&head, int val){
    node * n = new node(val);
    node * temp = head;
    if(head==NULL){
        n->next = n; //very very important in circular linked list
        head = n;
        return;
    }
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;

}

void insertAtTaleC(node*&head,int val){
    node * n = new node(val);
    if(head==NULL){
        head = n;
        head->next = head;
        return;
    }

    node * temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    return;
}


void display(node * head){
    node * temp = head;
    if(head==NULL){
        cout<<"Nothing to display :("<<endl;
        return;
    }
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void displayC(node * head){
    node * temp = head;
    if(head==NULL){
        cout<<"Nothing to display :("<<endl;
        return;
    }
    do{
        cout<<temp->data<<"->";
        temp = temp->next;
    }while(temp!=head);
    cout<<"Head"<<endl;
}

void deleteAtHead(node *&head){
    node * temp = head;
    node * toDelete = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = head->next;
    head = head->next;
    delete toDelete;

}

void deletion(node*&head,int pos){

    if(pos==1){
        deleteAtHead(head);
        return;
    }

    node * temp = head;
    int count = 1;
    while(count!=pos-1){
        temp = temp->next;
        count++;
    }
    node * toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}


int main(){
    node * head = NULL;
    int arr[] = {1,2,3,4,5,6,9};
    for(auto i:arr){
        insertAtTaleC(head,i);
    }
    // display(head);
    displayC(head);
    insertAtHead(head,0);
    displayC(head);
    deleteAtHead(head);
    displayC(head);
    deleteAtHead(head);
    displayC(head);
    deletion(head,2);
    displayC(head);
    deletion(head,4);
    displayC(head);
}