#include<iostream>
#include<algorithm>
using namespace std;

int partition(int A[], int l, int r){
    int key = A[r];
    int i = l-1;
    int j = l;
    for(int j=l;j<r;j++){
        if(A[j]<key){
            i++;
            swap(A[j],A[i]);
        }
    }
    swap(A[i+1],A[r]);
    return i+1;
}

void quickSort(int A[], int l, int r){
    if(l<r){
        int x = partition(A,l,r);
        quickSort(A,l,x-1);
        quickSort(A,x+1,r);
    }
}

int main(){
    int n = 10;
    int A[] = {0,5,4,8,9,6,3,7,1,2,10};
    for(auto i:A){
        cout<<i<<" ";
    }cout<<endl;
    
    quickSort(A,0,n-1);

    for(auto i:A){
        cout<<i<<" ";
    }cout<<endl;
}