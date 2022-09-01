/*
Given an array arr[] of distinct elements size N that is sorted and then around an unknown point, the task is to check if the array has a pair with a given sum X.
*/
#include<bits/stdc++.h>
using namespace std;

int findPivot(int arr[],int low, int high){
    if(low>high) return -1;
    if(low == high) return low;

    int mid = (low+high)/2;
    
    if(mid>low and arr[mid]<arr[mid-1]){
        return mid-1;
    }
    if(mid<high and arr[mid]>arr[mid+1]){
        return mid;
    }
    if(arr[low]>=arr[mid]){
        return findPivot(arr,low,mid-1);
    }
    return findPivot(arr,mid+1,high);
}

void revertArray(int arr[], int pivot, int N){
    int temp[N];
    int pos = 0;
    for(int i=pivot+1; i<N; i++){
        temp[pos++] = arr[i];
    }
    for(int i=0; i<=pivot; i++){
        temp[pos++] = arr[i];
    }
    for(int i=0;i<N;i++){
        arr[i] = temp[i];
    }
}

bool findPair(int arr[], int start, int end, int N, int ans){
    while(start<end){
        if(arr[start]+arr[end]==ans){
            return true;
        }
        else if(arr[start]+arr[end]<ans){
            start++;
        }
        else{
            end--;
        }
    }
    return false;
}


bool pairInSortedRotated(int arr[], int N, int X){
    //first task is to find the pivot
    //second then we need to revert it as it was in its original form
    //third task is to assign two pointers then try to figure out the pair.
    //first task
    int pivot = findPivot(arr,0,N-1);
    if(pivot!=-1){
        revertArray(arr,pivot,N);
    }
    int start = 0;
    int end = N-1;
    return findPair(arr,start,end,N,X);
}

int main()
{
    int arr[] = { 11, 15, 6, 8, 9, 10 };
    int X = 27;
    int N = sizeof(arr) / sizeof(arr[0]);
  
    // Function call
    if (pairInSortedRotated(arr, N, X))
        cout << "true";
    else
        cout << "false";
  
    return 0;
}