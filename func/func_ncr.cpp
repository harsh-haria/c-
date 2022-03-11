#include<iostream>
using namespace std;


int fact(int num){
    int facto=1;
    int temp=1;
    while(temp<=num){
        facto*=temp;
        temp++;
    }
    return facto;
}

int main(){
    int n,r,ans;
    cin>>n>>r;
    //cout<<n<<" "<<r<<endl;;
    int nx = fact(n);
    //cout<<nx<<endl;
    int rx = fact(r);
    //cout<<rx<<endl;
    int nr = fact(n-r);
    //cout<<nr<<endl;
    ans = nx/(rx*nr);
    cout<<ans<<endl;
}