#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* arbit;
        Node* next;
        Node(int x){
            data = x;
            arbit = NULL;
            next = NULL;
        }
};

Node* sortedMerge(Node* head1, Node* head2){
    Node *ans = NULL;
    Node *returner = NULL;
    while(head1 and head2){
        Node *temp = NULL;
        if(head1->data<head2->data){
            temp = head1;
            head1 = head1->arbit;
        }
        else{
            temp = head2;
            head2 = head2->arbit;
        }
        temp->arbit = NULL;
        if(!ans){
            ans = temp;
            returner = ans;
        }
        else{
            ans->arbit = temp;
            ans = ans->arbit;
        }
        
    }
    if(!head1){
        ans->arbit = head2;
    }
    if(!head2){
        ans->arbit = head1;
    }
    return returner;
}

Node* mergeSort(Node* head) {
    // your code here
    if(!head or !head->arbit) return head;
    int count = 0;
    Node *temp = head;
    while(temp){
        count++;
        temp = temp->arbit;
    }
    temp = head;
    int split = (count/2);
    while(--split){
        temp = temp->arbit;
    }
    Node *splited = temp->arbit;
    temp->arbit = NULL;
    return sortedMerge( mergeSort(head),mergeSort(splited) );
}

void push(Node **head, int data){
    Node *temp = new Node(data);
    temp->next = *head;
    *head = temp;
}

Node* populateArbit(Node * head){
    Node * temp = head;
    while(temp){
        temp->arbit = temp->next;
        temp = temp->next;
    }
    temp = mergeSort(head);
    return temp;
}

void printListAfter(Node *node, Node *anode)
{
    cout<<"Traversal using Next Pointer\n";
    while (node!=NULL)
    {
        cout << node->data << ", ";
        node = node->next;
    }
 
    printf("\nTraversal using Arbit Pointer\n");
    while (anode!=NULL)
    {
        cout << anode->data << ", ";
        anode = anode->arbit;
    }
}

int main(){
    Node * head = NULL;
    push(&head,3);
    push(&head,2);
    push(&head,10);
    push(&head,5);
    Node *ahead = populateArbit(head);
    cout<<"result of linked list is: "<<endl;
    printListAfter(head,ahead);
}