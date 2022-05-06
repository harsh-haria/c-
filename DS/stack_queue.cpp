#include<iostream>
using namespace std;

struct DQueNode{
    int data;
    DQueNode* next;
    DQueNode* prev;
};

class Deque{
    private:
    DQueNode* head;
    DQueNode* tail;
    public:
    Deque(){
        head = tail = NULL;
    }
    
    bool isEmpty(){
        if(!head){
            return false;
        }
        return true;
    }

    int size(){
        if(isEmpty()){
            return 0;
        }
        DQueNode* temp = head;
        int count = 0;
        while(!temp){
            count++;
            temp = temp->next;
        }
        return count;
    }

    void insert_first(int x){
        if(!head){
            DQueNode* node = new DQueNode();
            node->data = x;
            head = tail = node;
            return;
        }
        DQueNode* node = new DQueNode();
        node->data = x;

        node->next = head;
        head->prev = node;
        node->prev = NULL;
        head = node;
    }

    void insert_last(int x){
        if(!head){
            DQueNode* node = new DQueNode();
            node->data = x;
            head = tail = node;
            return;
        }
        DQueNode* node = new DQueNode();
        node->data = x;
        tail->next = node;
        node->prev = tail;
        node->next = NULL;
        tail = node;
    }

    void remove_first(){
        if(!isEmpty()){
            DQueNode* temp = head;
            head = head->next;
            if(!head){
                tail = NULL;
                return ;
            }
            if(head){
                head->prev = NULL;
                delete temp;
                return;
            }
        }
        cout << "List is Empty" << endl;
    }

    void remove_last(){
        if(!head){
            cout<<"List is Empty"<<endl;
            return;
        }
        DQueNode* temp = head;
        while(temp->next->next!=NULL){
            temp = temp->next;
        }
        DQueNode* toDelete = temp->next;
        temp->next = NULL;
        tail = temp;
        delete toDelete;
    }
};

class Stack: public Deque{
    public:
        void push(int x){
            insert_last(x);
        }
        void pop(){
            remove_last();
        }
};

class Queue : public Deque{
    public:
        void push(int x){
            insert_first(x);
        }
        void pop(){
            remove_first();
        }
};

int main(){
    Stack stk;
    stk.push(7);
    stk.push(8);
    Queue q;
    q.push(9);
    q.pop();
}