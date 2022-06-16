//if the user passes the string as "ABC", then print all possible strings like ACB, BAC and so on.
//for ABC all possible string will be ABC, ACB, BAC, BCA, CAB, CBA.

#include<iostream>
using namespace std;

void per(string s,string ans=""){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    for(int i=0;i<s.length();i++){
        string x = s;
        char ch = s[i];
        per(x.erase(i,1),ans+ch);  // *
        // per((s.substr(0,i)+s.substr(i+1),ans+ch));  // +
    }
}

int main(){
    per("123");
}