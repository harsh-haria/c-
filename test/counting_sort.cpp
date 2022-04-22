#include<iostream>
using namespace std;

void counting(int a[],int len, int ans[]){
    int maxi = INT_MIN;
    for(int i=0;i<len;i++){ //get the max element
        maxi = max(maxi, a[i]);
    }
    
    int arr[maxi+1] = {0};
    for(int i=0;i<len;i++){ //write the positions of the elements in the new array
        arr[a[i]]++;
    }
    
    for(int i=1;i<=len;i++){ //add the positions so we can sort and place the elements in the new array
        arr[i] = arr[i-1]+ arr[i];
    }

    for(int i=0;i<len;i++){ //finally place the elements in the new array
        ans[--arr[a[i]]] = a[i];
    }
}

int a(){
    int n = 9;
    int a[] = {0,5,4,8,9,6,3,7,1,2};
    for(auto i:a){
        cout<<i<<" ";
    }cout<<endl;
    int ans[n];
    counting(a,n,ans);

    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}