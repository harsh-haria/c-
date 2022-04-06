#include<iostream>
using namespace std;

class Dnode{
    public:
        Dnode * prev;
        int data;
        Dnode * next;
    
    Dnode(int n){
        data = n;
        prev = NULL; 
        next = NULL;
    }
};

void insertAtTale(Dnode * &head, int val){// &head bcz we will be modifying the head

    Dnode * n = new Dnode(val);

    if(head==NULL){
        head = n;
        return;
    }

    Dnode * temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;

    //no need to put null in n->next bcz we have already did it in constructor
}

void insertAtHead(Dnode * &head, int val){
    Dnode * n = new Dnode(val);
    if(head==NULL){
        head = n;
        return;
    }
    Dnode * temp = head;
    n->next = head;
    head->prev = n;
    head = n;
}

void deleteNode(Dnode * &head, int val){
    Dnode * temp = head;
    if(head==NULL){
        cout<<"Nothing to Delete"<<endl;
        return;
    }
    if(temp->data==val){
        Dnode * headtodelete = head;
        head = temp->next;
        temp->next->prev = NULL; //head->prev = NULL;
        delete headtodelete; //helps to avoid memory leak
        return;
    }

    while(temp!=NULL && temp->data!=val){
        temp = temp->next;
    }
    if(temp->next==NULL){
        temp->prev->next = temp->next;
        delete temp;
        return;
    }
    // cout<<temp->data<<endl;
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;
}

void display(Dnode * head){// only head here bcz we will just traverse the list
    Dnode * temp = head; //no need to do this. we could have also used head as we are just taking the refernce of head
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void doubleDisplay(Dnode * head){
    Dnode * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
        if(temp->next==NULL){
            cout<<temp->data<<"->";
            break;
        }
    }
    cout<<"NULL->";
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->prev;
    }
    cout<<"NULL"<<endl;
}


int main(){
    Dnode * head = NULL;
    insertAtTale(head,1); 
    insertAtTale(head,2); 
    insertAtTale(head,3); 
    insertAtTale(head,4); 
    insertAtTale(head,5); 
    insertAtTale(head,6);
    display(head); 
    // doubleDisplay(head);
    insertAtHead(head,0);
    display(head);
    insertAtTale(head,7);
    display(head);
    deleteNode(head,7);
    display(head);
}