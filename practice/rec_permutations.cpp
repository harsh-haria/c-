#include<iostream>
using namespace std;

void per(string s, string ans=""){
    if(s.length()==0){
        cout<<ans<<endl;
    }
    for(int i=0;i<s.length();i++){
        string x = s;
        char ch = s[i];
        per(x.erase(i,1),ans+ch);
    }
}

int main(){
    per("ABC");
}