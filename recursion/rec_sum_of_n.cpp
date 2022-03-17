#include<iostream>
using namespace std;

int s = 0;
int sumitup(int n){
    if(n==0){
        return s;
    }
    cout<<n<<" ";
    s+=n;
    return sumitup(n-1);
}

int sumitup2(int n){
    if(n==0){
        return 0;
    }
    int prevsum = sumitup2(n-1);
    return n + prevsum;
}

int main(){
    int  n;
    cin>>n;
    int sum = sumitup(n); 
    int sum2 = sumitup2(n);
    cout<<endl<<sum<<endl<<sum2<<endl;
}