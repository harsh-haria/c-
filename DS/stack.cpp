#include<iostream>
using namespace std;

#define n 100

class stack{
    int *arr;
    int top;
    public:
        stack(){
            arr = new int[n];
            top = -1;
        }
        void push(int x){
            if(top==n-1){
                cout<<"Stack Overflow :("<<endl;
                return;
            }
            arr[++top] = x;
        }
        int pop(){
            if(top==-1){
                cout<<"Stack Underflow"<<endl;
                return -1;
            }
            return arr[top--];
        }
        int Top(){
            if(top==-1){
                cout<<"Stack Underflow"<<endl;
                return -1;
            }
            return arr[top];
        }
        bool empty(){
            return top==-1;
        }
};