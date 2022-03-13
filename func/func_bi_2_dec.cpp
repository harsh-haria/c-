#include<iostream>
using namespace std;

int bi2dec(string s){
    int len = s.length();
    int mod = 0;
    int num = stoi(s);
    string newstr = "";
    while(num){
        mod = num%2;
        num/=2;
        newstr = to_string(mod) + newstr; 
    }
    return stoi(newstr);
}


int main(){
    string str;
    cin>>str;

    int x = bi2dec(str);
    cout<<x;
}