//print all possible strings that can be generated from keypad.
//the characters corresponding to the number need to be used.
//2 has abc, 3 has def
//example "23" then print ad ae af bd be bf cd ce cf

#include<iostream>
using namespace std;

string keypadArr[] = {"","./","abc","def","ghi", "jkl","mno", "pqrs","tuv","wxyz"};

void keypad(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string code = keypadArr[ch-'0'];
    string ros = s.substr(1);

    for(int i=0;i<code.length();i++){
        keypad(ros, ans + code[i]);
    }
}

int main(){
    string s; cin>>s;
    keypad(s,"");
}