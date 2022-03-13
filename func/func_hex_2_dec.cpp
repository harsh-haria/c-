#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int hex2dec(string s){
    int len = s.length();
    int sum = 0;
    int power = 0;
    while(len>0){
        char a = s[len-1];
        int n = 0;
        
        // cout<<"num"<<endl;
        switch(a){
            case 'A':
            n=10;
            break;
            case 'B':
            n=11;
            break;
            case 'C':
            n = 12;
            break;
            case 'D':
            n = 13;
            break;
            case 'E':
            n = 14;
            break;
            case 'F':
            n = 15;
            break;
        }
        if(!(n<16 && n>9)){
            string temp="";
            temp = s.substr(len-1,1);
            n = stoi(temp);
        }
        cout <<n<<" " << power <<endl;
        sum+= n * pow(16,power);
        power++;
        len--;
    }
    return sum;
}

int main(){
    string str;
    cin>> str;
    int out=0;
    out = hex2dec(str);
    cout<<endl<<out<<endl;
}