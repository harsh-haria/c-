#include<iostream>
#include<string>
using namespace std;

int deci=0;
int bi;
string x;
char code[32] = {0};

void spliter(string s){
    cout<<s[3]<<endl;
    
}

int main(){
    cout<<"Enter the binary number: ";
    getline(cin,x);
    cout<<"Number Entered: "<<x<<endl;
    spliter(x);
}