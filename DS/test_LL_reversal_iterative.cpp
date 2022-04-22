#include<iostream>
#include "linked_list_intro.cpp"
using namespace std;

int main(){
    node* head = NULL;
    for(int i=1;i<11;i++){
        insertAtTale(head,i);
    }
    display(head);
    node* temp = head;
    node* newhead = reverse_without_rec(temp);
    display(newhead);
    temp = newhead;
    node* headnew = reverse_with_rec(temp);
    display(headnew);
}