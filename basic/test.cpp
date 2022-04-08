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
    vector <int> A;
    vector<int>v[100003];
    bool visit[100003];

    for(int i = 0; i < A.size(); ++i )
        v[i].push_back(A[i]-1), v[A[i]-1].push_back(i);

    //not sure whats going on :/
}