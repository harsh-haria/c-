#include<iostream>
using namespace std;

void print_it(string s){
    if(s[0]=='\0'){
        return;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<3.14;
        print_it(s.substr(2));
    }
    else{
        cout<<s[0];
        print_it(s.substr(1));
    }
}

int main(){
    string str;
    cin>>str;

    print_it(str);
    return 0;
}