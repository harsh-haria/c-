#include<iostream>
using namespace std;

int dec2oct(string s){
    int len = s.length();
    int mod = 0;
    int num = stoi(s);
    string newstr = "";
    while(num){
        mod = num%8;
        num/=8;
        newstr = to_string(mod) + newstr; 
    }
    return stoi(newstr);
}


int main(){
    string str;
    cin>>str;

    int x = dec2oct(str);
    cout<<x;
}