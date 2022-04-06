#include<iostream>
using namespace std;

//based on flyods algorithm
//also called as hare and tortoise algorithm
//https://youtu.be/Fj1ywT9ETQk?t=636
//the link is explanation of the formula used in this algorithm

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

bool detectCycle(node * head){
    node * slow = head;
    node * fast = head;
    
    while(fast->next->next!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;

}

void removeCycle(node * head){
    if(detectCycle){
        node * slow = head;
        node * fast = head;

        while(fast->next->next!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                fast = head;
                break;
            }
        }
        while(fast->next!=slow->next){
            fast = fast->next;
            slow = slow->next;
        }
        slow->next=NULL;
    }
}

void makeCycle(node * &head, int pos){
    node * temp = head;
    node * startNode;

    int count = 1;
    while(temp->next!=NULL){
        if(count == pos){
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}

int main(){
    node * head = NULL;
    for(int i=1;i<=10;i++){
        insertAtTale(head,i);
    }
    display(head);
    makeCycle(head,3);
    // display(head); //check for cycles
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    cout<<detectCycle(head)<<endl;
    display(head);
}