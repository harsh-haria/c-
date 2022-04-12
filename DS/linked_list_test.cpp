//this is a test file to check the functionality of importing functions from different .cpp file
#include<iostream>
#include "linked_list_intro.cpp" //this file should not contain main function


int main(){
    node * head =NULL;
    for(int i=0;i<6;i++){
        insertAtTale(head,i);
    }
    display(head);
}