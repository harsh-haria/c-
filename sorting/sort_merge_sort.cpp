#include<bits/stdc++.h>
using namespace std;
//19.1
void merge(int arr[], int l, int mid, int r){
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1];
    int b[n2];

    for(int i=0;i<n1;i++){
        a[i] = arr[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i] = arr[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(a[i]<b[i]){
            arr[k] = a[i];
            i++; k++;
        }

        if(b[i]<a[i]){
            arr[k] = b[j];
            k++; j++;
        }
        
    }

    while(i<n1){
        arr[k] = a[i];
        i++; k++;
    }
    while(j<n2){
        arr[k] = b[j];
        k++; j++;
    }

}

void mergeSort(int arr[],int l,int r){
    if(l<r){
        int mid = (l+r)/2;

        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        
        merge(arr,l,mid,r);
    }
}

int main(){
    int n = 6;
    int arr[] = {5,4,3,2,1,0};
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}