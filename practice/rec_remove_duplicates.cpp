#include<iostream>
using namespace std;

string removeDup(string s){
    if(s.length()==0){
        return "";
    }
    char ch = s[0];
    string x = removeDup(s.substr(1));
    if(x[0]==ch){
        return x;
    }
    else{
        return ch+x;
    }
}

int main(){
    cout<<removeDup("aaabbcccdddddddefffffg");
    return 0;
}