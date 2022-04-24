#include<iostream>
using namespace std;

int linear_search(int arr[], int n, int k){
    for(int i=0;i<n;i++){
        if(k==arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int n = 9;
    int a[] = {0,5,4,8,9,6,3,7,1,2};
    for(auto i:a){
        cout<<i<<" ";
    }cout<<endl;

    int key = 10;
    int x = linear_search(a,n,key);
    if(x==-1){
        cout<<"Not found :("<<endl;
    }
    else{
        cout<<x+1<<endl;
    }
}