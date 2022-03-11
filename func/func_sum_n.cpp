#include<iostream>
using namespace std;

void natural(int num){
    int temp;
    temp =(num*(num+1))/2;
    cout<<temp<<endl;
}

int main(){
    int n;
    cin>>n;
    natural(n);
}