#include<iostream>
using namespace std;

int facto=1;
int fact(int num){
    int temp=1;
    while(temp<=num){
        facto*=temp;
        temp++;
    }
    return facto;
}

int main(){
    int size,x;
    cin>>size;
    x = fact(size);
    cout<<x;
}