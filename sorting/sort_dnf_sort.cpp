//dnf stands for dutch national flag sort
//it is also called as 0,1,2 sort.
//can be used when you have a array filled with only 3 numbers and you want to sort them

#include<iostream>
using namespace std;

void dnf(int arr[], int n, int a, int b, int c){
    int low=0, mid=0, high=n-1;
    while(mid<=high){
        if(arr[mid]==a){
            swap(arr[low],arr[mid]);
            low++;mid++;
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
    int n=9;
    int arr[] = {1,0,2,1,0,1,2,1,2};

    dnf(arr,n,0,1,2);
    
    for(auto i:arr){
        cout<<i<<" ";
    }
    
}