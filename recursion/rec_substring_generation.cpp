//print all substrings using recursion
//https://youtu.be/j9RG18jfnRY?t=1400
#include<iostream>
using namespace std;

void substring(string s,string ans){

    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    string ros = s.substr(1);
    
    substring(ros,ans);
    substring(ros,ans+ch);
}

void asciisubstring(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    string ros = s.substr(1);
    
    asciisubstring(ros,ans);
    asciisubstring(ros,ans+ch);
    asciisubstring(ros,to_string(int(ch))+ans);
}

int main(){
    string s;
    cin>>s;

    substring(s,"");
    cout<<endl<<"second problem"<<endl;
    asciisubstring(s,"");
    return 0;
}