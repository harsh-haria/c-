#include<iostream>
#include<string>
#include<algorithm>
#include<string.h>
using namespace std;

string capital(string s){
    int len = s.length();
    int i=0;
    while (i<len){
        if(s[i]>='a' && s[i]<='z'){
            s[i] = s[i] - 32;
        }
        i++;
    }
    return s;
}

string small(string s){
    int len = s.length();
    int i=0;
    while (i<len){
        if(s[i]>='A' && s[i]<='Z'){
            s[i] = s[i] + 32;
        }
        i++;
    }
    return s;
}

int main(){
    string str= "I am a Billionaire";
    // cin>>str;
    cout<<capital(str)<<endl;
    cout<<small(str)<<endl;

    //one other method is directly with a function called as transform
    transform(str.begin(),str.end(),str.begin(),::toupper);
    //transform(StartOfString, EndOfString, whereYouWantToStartEditing, Function)
    cout<<str<<endl;
    transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<str<<endl;
    return 0;
    // strupr(str) needs string.h and takes a character array

}