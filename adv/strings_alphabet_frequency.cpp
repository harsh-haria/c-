#include<iostream>
using namespace std;

int main(){
    string s = "nragfhhhhhwefebdbcvhgdgurteeeeeedg";
    int freq[s.length()];
    for(int i=0;i<s.length();i++){
        freq[i]=0;        
    }
    for(int i=0;i<s.length();i++){
        freq[s[i]-'a']++;
    }
    int maxlen = 0;
    char sub = 'a';
    for(int i=0;i<s.length();i++){
        if(maxlen<freq[i]){
            sub = i + 'a';
            maxlen = max(freq[i],maxlen);
        }
    }
    cout<<maxlen<<" "<<sub<<endl;
}