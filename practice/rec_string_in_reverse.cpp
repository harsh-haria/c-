#include<iostream>
using namespace std;

void reverse(char s[]){
    if(*s=='\0'){
        return;
    }
    reverse(s+1);
    cout<<s[0];
    // cout<<s+1;
}

int main(){
    char x[] = "binod";
    reverse(x);
}