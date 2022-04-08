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
        node(int n,node * &head,int val){
            data = n;
            node * x = head;
            while(x->data!=val){
                x = x->next;
            }
            next = x;
        }
};

void insertAtHead(node * &head, int val){
    node * n = new node(val);
    n->next = head;
    head = n;
}

void insertAtTale(node * &head, int val, int intersect,node *&newhead, int newval){// &head bcz we will be modifying the head

    node * n;

    if(intersect==1){
        n = new node(val,newhead,newval);
    }
    else{
        n = new node(val);
    }

    

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

void findIntersection(node *head1, node *head2){
    node * temp1 = head1;
    node * temp2 = head2;
    int flag=0;
    int count1 = 0,count2 = 0;
    
    while(temp1!=NULL){
        count1++;
        temp1 = temp1->next;
    }
    while(temp2!=NULL){
        count2++;
        temp2 = temp2->next;
    }

    if(count1>count2){
        flag = 1;
    }
    else if(count1<count2){
        flag = 2;
    }
    else{
        flag = 0;
    }
    temp1 = head1;
    temp2 = head2;
    int diff = abs(count1-count2);
    if(flag==1){
        while(diff&&temp1!=NULL){
            temp1 = temp1->next;
            diff--;
        }
    }
    if(flag==2){
        while(diff && temp2!=NULL){
            temp2 = temp2->next;
            diff--;
        }
    }
    if(temp1==NULL || temp2==NULL){
        cout<<-1<<endl;
        return;
    } 
    // cout<<"DEBUG POINT 1"<<endl;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1==temp2){
            cout<<temp1->data<<endl;
            return;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    cout<<-1;
    return;
}

int main(){
    node * head1 = NULL;
    node * head2 = NULL;
    for(int i=1;i<=8;i++){
        insertAtTale(head1,i,0,head1,0);
    }
    insertAtTale(head2,9,0,head2,0);
    insertAtTale(head2,10,0,head1,5); //condition 1
    insertAtTale(head2,11,1,head1,5); 
    // insertAtTale(head2,10,0,head1,0);   //condition 2

    display(head1);
    display(head2);
    findIntersection(head1,head2);
    return 0;
}