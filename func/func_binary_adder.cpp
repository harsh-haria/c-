#include<iostream>
#include<string>
using namespace std;

string binadd(string s, string t);

int main(){
    string s1,s2;
    cin>>s1>>s2;
    
    string x = binadd(s1,s2);
    cout<<x<<endl;
}

string binadd(string s, string t){
    int len1 = s.length();
    int len2 = t.length();
    bool a;
    len1>len2?a=0:a=1;
    int carry=0;
    int count = abs(len1-len2);
    int len = max(len1,len2);
    // int newint = 0;
    string output = "";
    for(int i=0;i<count;i++){
        if(a==0){
            //len2
            t = '0' + t;
        }
        else{
            s = '0' + s;
        }
    }
    cout<<s<<" "<<t<<endl;
    while(len>0){
        int newint = 0;
        string k = s.substr(len-1,1);
        string l = t.substr(len-1,1);
        int e1 = stoi(k);
        int e2 = stoi(l);
        if(e1==0 && e2==0){
            if(carry==1){
                newint = 1;
                carry = 0;
            }
            else{
                newint = 0;
                carry = 0;
            }
        }
        else if(e1==0 && e2==1){
            if(carry==1){
                newint = 0;
                carry = 1;
            }
            else{
                newint = 1;
                carry = 0;
            }
        }
        else if(e1==1 && e2==0){
            if(carry==1){
                newint = 0;
                carry = 1;
            }
            else{
                newint = 1;
                carry = 0;
            }
        }
        else if(e1==1 && e2==1){
            if(carry==1){
                newint = 1;
                carry = 1;
            }
            else{
                newint = 0;
                carry = 1;
            }
        }
        else{
            //do nothing;
        }
        output = to_string(newint) + output;
        // cout<<output<<endl;
        len--;
    }
    return to_string(carry) + output;
    
}