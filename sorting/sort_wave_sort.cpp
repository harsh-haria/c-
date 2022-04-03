//input array: 1 3 4 7 5 6 2
//output:
/*
    3       7       6       5
        1       4       2
*/
#include<iostream>
using namespace std;

void wave(int arr[], int n){
    for(int i=1;i<=n-1;i+=2){
        if(arr[i]>arr[i-1]){
            swap(arr[i],arr[i-1]);
        }

        if(arr[i]>arr[i+1] && i<=n-2){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    int n=7;
    int arr[] = {1,3,4,7,5,6,2};

    wave(arr,n);
    for(auto i:arr){
        cout<<i<<" ";
    }
}
