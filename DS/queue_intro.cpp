#include<iostream>
using namespace std;
#define n 20

class queue{
    int* arr;
    int front;
    int back;
    public:
        queue(){
            arr = new int[n];
            front = -1;
            back = -1;
        }

        void push(int x){
            if(back==n-1){
                cout<<"Insertion Not Possible\nQueue OverFlow :("<<endl;
                return;
            }
            back++;
            arr[back] = x;
            if(front == -1){
                front++;
            }
        }

        void pop(){
            if(front==-1 or front>back){
                cout<<"No Element to Pop :("<<endl;
                return;
            }
            front++;
        }

        int peek(){
            if(front==-1 or front>back){
                return -1;
            }
            return arr[front];
        }
        bool empty(){
            if(front==-1 or front>back){
                return true;
            }
            return false;
        }
};

int main(){
    queue x;
    x.push(1);
    x.push(2);
    x.push(3);
    x.push(4);
    x.push(5);
    cout<<x.peek()<<endl;
    x.pop();
    cout<<x.peek()<<endl;
    cout<<x.empty()<<endl;
    x.pop();
    x.pop();
    x.pop();
    x.pop();
    x.pop();
    cout<<x.peek()<<endl;
    cout<<x.empty()<<endl;
}