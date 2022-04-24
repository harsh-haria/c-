#include<iostream>
using namespace std;

void dnf(int arr[],int n, int a,int b, int c){
    int low=0, mid=0, high=n-1;
    while(mid!=high){
        if(arr[mid]==a){
            swap(arr[low++],arr[mid++]);
        }
        else if(arr[mid]==b){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main(){
    int n = 25;
    int a[] = {0,2,0,1,0,2,0,1,2,0,1,0,2,1,2,2,1,0,2,1,0,2,1,0,2};
    // int a[] = {1,0,2,1,0,1,2,1,2,2,0,1,2,0,1,1,1};
    for(auto i:a){
        cout<<i<<" ";
    }cout<<endl;
    int ans[n];
    dnf(a,n,0,1,2);
    for(auto i:a){
        cout<<i<<" ";
    }cout<<endl;
}