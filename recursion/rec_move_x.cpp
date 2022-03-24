//move all 'x' characters in the string at the end of the string

#include<iostream>
using namespace std;

string moveallX(string s){
    if(s.length()==0){
        return "";
    }
    char ch = s[0];
    string ans = moveallX(s.substr(1));
    if(ch=='x'){
        return ans+ch;
    }
    else{
        return ch+ans;
    }
}


int main(){
    string s;
    cin>>s;
    cout<<moveallX(s)<<endl;
    return 0;
}