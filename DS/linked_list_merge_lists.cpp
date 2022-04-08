#include<iostream>
using namespace std;

//here we have two sorted linked lists
//our job is to merge them both and while merging we are supposed to sort it as well.
//this is similar to the merge function we had seen in merge sort

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

node* merger(node * &head1,node *head2){
    node * temp1 = head1;
    node * temp2 = head2;
    
    node * ant = new node(-1);
    node * ans = ant;
    while(temp1!=NULL||temp2!=NULL){
        if(temp1==NULL){
            ans->next = temp2;
            ans = ans->next;
            temp2 = temp2->next;
        }
        else if(temp2==NULL){
            ans->next = temp1;
            ans = ans->next;
            temp1 = temp1->next;
        }
        else{
            if( (temp1->data)<(temp2->data) ){
                ans->next = temp1;
                ans = ans->next;
                temp1 = temp1->next;
            }
            else{
                ans->next = temp2;
                ans = ans->next;
                temp2 = temp2->next;
            }
        }
    }
    return ant->next;
}

node* recursiveMerger(node * &head1, node * &head2){
    node * result;

    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }

    if(head1->data < head2->data){
        result = head1;
        result->next = recursiveMerger(head1->next,head2);
    }
    else{
        result = head2;
        result->next = recursiveMerger(head1,head2->next);
    }

    return result;
}

int main(){
    node * head1 = NULL;
    insertAtTale(head1,1);
    insertAtTale(head1,2);
    insertAtTale(head1,3);
    insertAtTale(head1,24);
    insertAtTale(head1,25);
    insertAtTale(head1,26);
    node * head2 = NULL;
    insertAtTale(head2,7);
    insertAtTale(head2,8);
    insertAtTale(head2,9);
    insertAtTale(head2,10);
    insertAtTale(head2,11);
    insertAtTale(head2,18);
    display(head1);
    display(head2);
    // node * final = merger(head1,head2);
    node * final = recursiveMerger(head1,head2);

    display(final);
}