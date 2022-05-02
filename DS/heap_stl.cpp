#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int,vector<int>> pq;
    priority_queue<int,vector<int>,greater<int>> qp;
    pq.push(2);
    pq.push(3);
    pq.push(1);
    pq.push(4);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    qp.push(2);
    qp.push(3);
    qp.push(1);
    qp.push(4);
    cout<<qp.top()<<endl;
    qp.pop();
    cout<<qp.top()<<endl;
}