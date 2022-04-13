#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

/*
    1) reverse the string
    2) replace '(' with ')' and ')' with '('
    3) apply the infix to postfix conversion method
    4) reverse the string and we have our answer :)
*/

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

string infix_prefix(string s){
    // reverse(s.begin(),s.end());
    cout<<"Original: "<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<"Reversed: "<<s<<endl;
    for(auto &i:s){
        if(i=='('){
            i=')';
        }
        else if(i==')'){
            i='(';
        }
        else{
            continue;
        }
    }
    cout<<"Brackets: "<<s<<endl;
    string x = convert(s);
    reverse(x.begin(),x.end());
    return x;
}

int main(){
    string s = "(a-b/c)*(a/k-l)";
    string ans = infix_prefix(s);
    cout<<ans<<endl;
}