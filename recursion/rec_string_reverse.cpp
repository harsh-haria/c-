#include<iostream>
using namespace std;

void reverse_it(string s,int len,int i){
    if(len==0){
        return;
    }
    reverse_it(s,len-1,++i);
    cout<<s.substr(i,1);
}

void reverse_it_2(string s){

    if(s.length()==0){
        return;
    }
    string news = s.substr(1);
    reverse_it_2(news);
    cout<< s[0];
}

int main(){

    string str;
    cin>>str;

    reverse_it(str,str.length(),-1); //first way
    cout<<endl;
    reverse_it_2(str); // second way
    return 0;
}