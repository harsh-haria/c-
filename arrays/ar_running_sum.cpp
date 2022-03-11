#include<iostream>
using namespace std;

int main(){
    int n;
    int count=0;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n] = {0};

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        count+=arr[i];
        arr[i]=count;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}