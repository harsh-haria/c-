#include<iostream>
using namespace std;

void oddeven(int num){
    (num%2==0)?cout<<"even":cout<<"odd";
}

int main(){
    int number;
    cin>>number;
    oddeven(number);
}