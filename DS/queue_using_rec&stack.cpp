#include<iostream>
#include<stack>
using namespace std;

class queue{
    stack<int> s;
    public:
        void enqueue(int x){
            s.push(x);
        }

        int deQ(){
            if( s.empty()){
                cout<<"No element to remove"<<endl;
                return -1;
            }
            int x = s.top();
            s.pop();
            if(s.empty()){
                return x;
            }
            int item = deQ();
            s.push(x);
            return item;
        }

        int peek(){
            if( s.empty()){
                cout<<"Queue empty :("<<endl;
                return -1;
            }
            return s.top();
        }

        bool empty(){
            if( s.empty()){
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
    cout<<q.deQ()<<endl;
    q.enqueue(5);
    cout<<q.deQ()<<endl;
    cout<<q.deQ()<<endl;
    cout<<q.deQ()<<endl;
    cout<<q.deQ()<<endl;
    cout<<q.deQ()<<endl;
}