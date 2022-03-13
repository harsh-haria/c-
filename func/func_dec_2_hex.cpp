#include<iostream>
using namespace std;
//not complete
int dec2hex(string s){
    int len = s.length();
    int mod = 0;
    int num = stoi(s);
    string newstr = "";
    char modstr = 'X';
    while(num){
        mod = num%16;
        if(mod>9){
            switch(mod){
                case 10:
                modstr = 'A';
                break;
                case 11:
                modstr = 'B';
                break;
                case 12:
                modstr = 'C';
                break;
                case 13:
                modstr = 'D';
                break;
                case 14:
                modstr = 'E';
                break;
                case 15:
                modstr = 'F';
                break;
            }
        }
        cout<<modstr<<" "<<endl;
        if(mod<10){
            newstr = to_string(mod) + newstr; 
        }
        if(mod>9){
            cout<<'p';
            newstr = modstr + newstr; 
        }
        num/=16;
    }
    return stoi(newstr);
}


int main(){
    string str;
    cin>>str;

    int x = dec2hex(str);
    cout<<x;
}