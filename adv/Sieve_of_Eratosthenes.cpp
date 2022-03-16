#include<iostream>
using namespace std;

void do_it(int *a,bool *b,int n){
    for(int i=2;i<=n;i++){
        if(i*i>n){
            break;
        }
        if(b[i]==1){
            continue;
        }
        else{
            int x = i*i;
            while(x<=n){
                if((a[(x++)]%i)==0){
                    b[x-1]=1;
                }
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    int prime1[n+1]={0};
    for(int i=0;i<=n;i++){
        prime1[i]=i;
    }
    bool prime2[n+1]={0};
    // for(int i=2;i<=n;i++){
    //     cout<<prime1[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=2;i<=n;i++){
    //     cout<<prime2[i]<<" ";
    // }
    // cout<<endl;

    do_it(prime1,prime2,n);

    for(int i=2;i<=n;i++){
        if(prime2[i]==0){
            cout<<i<<" ";
        }
    }
    return 0;
}