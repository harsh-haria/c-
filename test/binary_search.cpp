#include<iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x){
    if(r>=l){
        int mid = l + (r-l) / 2;
        cout<<"ARR["<<mid<<"]: "<<arr[mid]<<endl;
        if(arr[mid]==x) return mid;
        else if(arr[mid]>x) return binarySearch(arr,l,mid-1,x);
        else return binarySearch(arr,mid+1,r,x);
    }
    return -1;
}

int main(){
    int n = 13;
    int a[] = {2, 3, 4, 7, 9, 10, 20, 22, 26, 31, 33, 39, 40};
    // cout<<sizeof(a)/sizeof(a[0]) - 1<<endl;0
    // cout<<n-1<<endl;
    int key = 10;
    for(auto i:a){
        cout<<i<<" ";
    }cout<<endl;
    int result = binarySearch(a,0,n-1,key);
    cout<<result<<endl;
}