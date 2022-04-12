#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&st, int ele){
    if(st.empty()){
        st.push(ele);
        return;
    }
    int topEle = st.top();
    st.pop();
    insertAtBottom(st,ele);
    st.push(topEle);
}

void reverse(stack<int> &st){
    if(st.empty()){
        return;
    }
    int ele = st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st,ele);
}

int main(){
    stack<int> st;
    for(int i=1;i<=6;i++){
        st.push(i);
    }
    reverse(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}