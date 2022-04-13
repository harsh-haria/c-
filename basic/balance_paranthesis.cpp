#include<iostream>
#include<stack>
using namespace std;
//checks if the prefix, postfix or infix operations are balanced or not.
//for a algo to work properly the data should be provided correctly.
bool isBalanced(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' or s[i]=='{' or s[i]=='['){
            st.push(s[i]);
        }
        else if (st.empty() and (s[i]==')' or s[i]=='}' or s[i]==']') ){
            return false;
        }
        else if (s[i]==')'){
            if(!st.empty() && st.top()=='('){
                st.pop();
                continue;
            }
            else{
                return false;
            }
        }
        else if (s[i]=='}'){
            if(!st.empty() && st.top()=='{'){
                st.pop();
                continue;
            }
            else{
                return false;
            }
        }
        else if (s[i]==']'){
            if(!st.empty() && st.top()=='['){
                st.pop();
                continue;
            }
            else{
                return false;
            }
        }
    }
    if(!st.empty()){
        return false;
    }
    return true;
}

int main(){
    // string s = "{([])}";
    string s; cin>>s;
    cout<<isBalanced(s)<<endl;
}