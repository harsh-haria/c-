#include<iostream>
using namespace std;

void check(char temp){
    if(((int)temp>=65&&(int)temp<=90)||(int)temp>=97&&(int)temp<=122){
        cout<<temp<<" is a valid alphabet";
    }
    else{
        cout<<"Not a valid alphabet";
    }
}


int main(){
    char temp;
    cout<<"Enter the character for the program: ";
    cin>>temp;
    check(temp);
}