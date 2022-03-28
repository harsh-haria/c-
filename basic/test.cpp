#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string bi2dec(string s){
    // int len = s.length();
    long mod = 0;
    long num = stoi(s);
    string newstr = "";
    while(num){
        mod = num%2;
        num/=2;
        newstr = to_string(mod) + newstr; 
    }
    long newlen = newstr.length();
    for(int i=0;i<32-newlen;i++){
        newstr = "0"+newstr;
    }
    // cout<<newstr<<endl;
    return newstr;
}

int main(){
    auto x = 5;
    auto p = 5.3;
    auto a="c++";
    cout<<x+p<<" "<<a<<endl;
}