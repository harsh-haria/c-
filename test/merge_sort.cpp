#include<iostream>
using namespace std;

void merge(int A[], int l, int mid, int r){
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1], b[n2];

    for(int i=0;i<n1;i++){
        a[i] = A[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i] = A[mid+1+i];
    }

    int i=0,j=0,k=l;
    while(i<n1 and j<n2){
        if(a[i]<b[j]){
            A[k] = a[i];
            i++;k++;
        }
        if(b[j]<a[i]){
            A[k] = b[j];
            j++; k++;
        }
    }
    while(i<n1){
        A[k] = a[i];
        i++; k++;
    }
    while(j<n2){
        A[k] = b[j];
        j++; k++;
    }
}

void mergeSort(int A[], int l, int r){
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(A,l,mid);
        mergeSort(A,mid+1,r);
        merge(A,l,mid,r);
    }
}

int main(){
    int n = 10;
    int A[] = {0,5,4,8,9,6,3,7,1,2,10};
    for(auto i:A){
        cout<<i<<" ";
    }cout<<endl;
    mergeSort(A,0,n-1);
    for(auto i:A){
        cout<<i<<" ";
    }
    cout<<endl;
}