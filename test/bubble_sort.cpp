#include<iostream>
using namespace std;
int main(){
    int n = 10;
    int a[] = {0,5,4,8,9,6,3,7,1,2,10};
    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    while(n){
        for(int i=0;i<n;i++){
            if(a[i]>a[i+1]){
                swap(a[i],a[i+1]);
            }
        }
        n--;
    }
    for(auto i:a){
        cout<<i<<" ";
    }
}