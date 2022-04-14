#include<iostream>
using namespace std;

class node{
    public:
        int val;    
        node* next;
        node(int x){
            val = x;
            next = NULL;
        }
};

class queue{
    public:
        node* front;
        node* back;
        queue(){
            front = NULL;
            back  = NULL;
        }
        
        void push(int x){
            node* n = new node(x);
            if(front==NULL){
                back = n;
                front = n;
                return;
            }
            back->next = n;
            back = n;
        }
        void pop(){
            if(front == NULL){
                cout<<"No element to pop"<<endl;
                return;
            }
            node* n = front;
            front = front->next;
            delete n;
        }

        int peek(){
            if(front == NULL){
                cout<<"Queue is empty"<<endl;
                return -1;
            }
            return front->val;
        }

        bool empty(){
            if(front==NULL){
                return 1;
            }
            return 0;
        }
};

int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
}