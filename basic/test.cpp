#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode *next;
    ListNode(int x=0){
        val = x;
        next = NULL;
    }

};

void insertAtTale(ListNode * &head, int val){// &head bcz we will be modifying the head

    ListNode * n = new ListNode(val);

    if(head==NULL){
        head = n;
        return;
    }

    ListNode * temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
    //no need to put null in n->next bcz we have already did it in constructor
}

int main(){
    ListNode * head = NULL;
}