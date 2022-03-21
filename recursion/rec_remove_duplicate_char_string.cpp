/*the input string should be in a lexicographical order
the recursive function should remove the repeated alphabets and print the character only 1 time*/
#include<iostream>
using namespace std;

void remove_it(string s,char c){
    if(s[0]=='\0'){
        return ;
    }
    if(s[0]==c){
        return remove_it(s.substr(1),c);
    }
    else{
        cout<<s[0];
        return remove_it(s.substr(1),s[0]);
    }
}

string removeDup(string s){
    if(s.length()==0){
        return "";
    }
    char ch = s[0];
    string ans = removeDup(s.substr(1));

    if(ch == ans[0]){
        return ans;
    }
    return ch+ans;
}

int main(){
    string s;
    cin>>s;

    remove_it(s,'\n');
    cout<<endl;
    removeDup(s);
}