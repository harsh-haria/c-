#include<iostream>
using namespace std;
//19.2

// void swap(int arr[], int i, int j){
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
// }

int partition(int arr[], int l, int r){
    int i = l-1;
    int pi = arr[r];
    for(int j=l;j<=r-1;j++){
        if(arr[j]<pi){
            i++;
            swap(arr[i],arr[j]);
            // swap(arr,i,j);
        }
    }
    swap(arr[i+1],arr[r]);
    // swap(arr,i+1,r);
    return i+1;
}

void quicksort(int arr[], int l, int r){
    if(l<r){
        int pi = partition(arr, l , r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
    }
}

int main(){
    int n  = 6;
    int a[n] = {5,4,3,2,1,0};
    quicksort(a,0,n-1);
    for(auto i:a){
        cout<<a[i]<<"  ";
    }
    return 0;
}