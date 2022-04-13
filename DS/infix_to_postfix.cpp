#include<iostream>
#include<stack>
using namespace std;

int pre(char st){//precedence
    if(st == '^'){
        return 3;
    }
    else if((st == '*') || (st == '/')){
        return 2;
    }
    else if( st=='+'||st=='-' ){
        return 1;
    }
    else{
        return -1;
    }
}

string convert(string s){
    string result = "";
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if( (s[i]>='a' && s[i]<='z') || s[i]>='A' && s[i]<='Z' ){
            result+=s[i];
        }
        else if(!st.empty() && s[i]=='('){
            st.push(s[i]);
        }
        else if(!st.empty() && s[i]==')'){
            while(st.top()!='('){
                result+=st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() && pre(st.top())>pre(s[i])){
                result +=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        result+=st.top();
        st.pop();
    }
    return result;
}

int main(){
    string s = "(a-b/c)*(a/k-l)";
    string ans = convert(s);
    cout<<ans<<endl;
    return 0;
}