#include<iostream>
using namespace std;

int firstocc(int a[],int n, int i, int key){
    if(a[i]==key){
        return i;
    }
    if(i==n){
        return -1;
    }
    return firstocc(a,n,i+1,key);
}

int lastocc(int a[],int n, int i, int key){
    if(i==n){
        return -1;
    }
    int restArray = lastocc(a,n,i+1,key);
    if(restArray!=-1){
        return restArray;
    }
    if(a[i]==key){
        return i;
    }
    return -1;
    
}
int main(){

    int n,key;
    cin>>key;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<firstocc(arr,n,0,key)<<endl;
    cout<<lastocc(arr,n,0,key);
}