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

int lengthOfList(node * head){
    node * temp = head;
    int len = 0;
    while(temp!=NULL){
        temp = temp->next;
        len++;
    }
    return len;
}


node* kNodesAppend(node *&head,int k){

    /*
        we can do this in another way where we use a while loop and we traverse from the link list once.
        place all the necessary pointers on their positions and after that just replace the newTail->next 
        with Null and so on.
        this solution that we have created is just complicating things for no reason xDD. 
    */

    // int L = lengthOfList(head);
    // if(k==0 || k>=L){
    //     cout<<"Input Invalid :("<<endl;
    //     return head;
    // }

    //for the above code what we can do is use k=k%L;
    //this will give us k if L is bigger than k. can be used as a corner case.

    // k = k%L;

    node * temp = head;
    node * newTail = head;
    int position = lengthOfList(head) - k;
    // cout<<"Position is: "<<position<<endl;
    int count = 1;
    while(count<=position){
        temp = temp->next;
        count++;
        if(count<=position){
            newTail = temp;
        }
    }
    node * newHead = temp;
    newTail->next = NULL;
    node * newtemp = newHead;
    while(newtemp->next!=NULL){
        newtemp = newtemp->next;
    }
    newtemp->next = head;
    return newHead;
}

int main(){
    int k; cin>>k;
    cout<<"K is: "<<k<<endl;
    node * head = NULL;
    for(int i=1;i<9;i++){
        insertAtTale(head,i);
    }
    display(head);
    
    // cout<<lengthOfList(head)<<endl;
    node * newhead = kNodesAppend(head,k);
    display(newhead);
}