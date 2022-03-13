#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int oct2dec(string s,int len){
    int sum = 0;
    int power = 0;
    int i = s.length();
    while(i>0){
        string s1 = s.substr(i-1,1);
        int n = stoi(s1);
        sum+= n * pow(8,power);
        power++;
        i--;
    }
    return sum;
}

int main(){
    string str;
    cin>>str;
    cout<< oct2dec(str,str.length())<<endl;
}