//calculate n raised to the power p
#include<iostream>
using namespace std;

int power(int n,int p){
    if(p==0){ //option p==1
        return 1;   //option return n;
    }
    return n * power(n, p-1);
}

int main(){
    int n,p;
    cin>>n>>p;
    int sum = power(n,p);
    cout<<sum<<endl;
}