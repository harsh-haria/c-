#include<iostream>
#include "stack.cpp"
using namespace std;

int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;
    st.pop();
    cout<<st.empty()<<endl;
    st.pop();
    return 0;
}

