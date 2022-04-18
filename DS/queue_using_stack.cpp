#include<iostream>
#include<stack>
using namespace std;

class queue{
    stack<int> s1;
    stack<int> s2;
    public:
        
        void enqueue(int x){
            s1.push(x);
        }

        void dequeue(){
            if( s1.empty() and s2.empty() ){
                cout<<"No element to remove"<<endl;
                return;
            }
            
            while(!s1.empty()){
                int toper = s1.top();
                s1.pop();
                s2.push(toper);
            }
            return s2.pop();
        }

        int peek(){
            if( s1.empty() and s2.empty() ){
                cout<<"Queue empty :("<<endl;
                return -1;
            }
            while(!s1.empty()){
                int toper = s1.top();
                s1.pop();
                s2.push(toper);
            }
            return s2.top();
        }

        bool empty(){
            if( s1.empty() and s2.empty() ){
                return 1;
            }
            return 0;
        }
};

int main(){
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
}