#include<iostream>
using namespace std;

string moveallX(string s){
    if(s.length()==0){
        return "";
    }
    char ch = s[0];
    string x = moveallX(s.substr(1));
    if(ch=='x'){
        return x+ch;
    }
    else{
        return ch+x;
    }
}



int main(){
    cout<<moveallX("aabcxxbxsbsbxwadadsxxdfy");
}