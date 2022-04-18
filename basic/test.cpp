#include<iostream>
#include<queue>
#include<stack>
#include<vector>
using namespace std;

void reverseString(vector<char> &s){
    
}

int main(){
    vector<char> s;
    s.push_back('s');
    s.push_back('t');
    s.push_back('r');
    s.push_back('i');
    s.push_back('n');
    s.push_back('g');
    for(auto i:s){
        cout<<i;
    }
    cout<<endl;
    reverseString(s); //reverse
    for(auto i:s){
        cout<<i;
    }
    cout<<endl;
}