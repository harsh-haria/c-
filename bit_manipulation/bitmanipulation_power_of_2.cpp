//check if given number is power of 2
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==0) {cout<<"No, it is not a power of 2"; return 0;}
    (n &( n-1))==0?cout<<"Yes, it is a power of 2":cout<<"No, it is not a power of 2";
}