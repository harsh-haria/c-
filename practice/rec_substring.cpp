#include<iostream>
using namespace std;

void sub(string s, string ans=""){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);

    sub(ros,ans);
    sub(ros,ans+ch);

}

int main(){
    string x = "abc";
    sub(x);
    return 0;
}