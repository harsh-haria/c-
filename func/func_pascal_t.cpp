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

int ncr(int n, int r){
    int ans;
    //cin>>n>>r;
    //cout<<n<<" "<<r<<endl;;
    int nx = fact(n);
    //cout<<nx<<endl;
    int rx = fact(r);
    //cout<<rx<<endl;
    int nr = fact(n-r);
    //cout<<nr<<endl;
    ans = nx/(rx*nr);
    return ans;
}

void pascal(int num){
    int temp;
    for(int i=0;i<num;i++){//;
        for(int j=0;j<=i;j++){
            temp = ncr(i,j);
            cout<<temp<<" ";
        }
        cout<<endl;
    }

}

int main(){
    int size;
    cin>>size;
    cout<<endl;
    pascal(size);
}