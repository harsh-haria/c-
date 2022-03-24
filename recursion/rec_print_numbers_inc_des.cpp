#include<iostream>
using namespace std;

void print_dec(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    print_dec(n-1);
}

void print_inc(int n){
    if(n==0){
        return;
    }
    print_inc(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;
    print_inc(n);
    cout<<endl;
    print_dec(n);
    return 0;
}