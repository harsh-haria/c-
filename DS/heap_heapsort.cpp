#include<iostream>
#include<vector>
using namespace std;

#define vi vector<int>


void Heapify(vector<int> arr,int i){
    int l,r,largest;
    l = 2*i;
    r = 2*i + 1;
    if(l<=arr.size() and arr[l-1]>arr[i-1]){
        largest = l;
    }
    else{
        largest = i;
    }
    if(r<=arr.size() and arr[r-1]>arr[largest -1]){
        largest = r;
    }
    if(largest!=i){
        // int x = arr[largest-1];
        // int y = arr[i-1];
        // arr[i-1] = x;
        // arr[largest-1] = y;
        swap(arr[largest-1],arr[i-1]);
        Heapify(arr,largest);
    }
}

       

void heapsort(vi &a){
    int n = a.size();
    for(int i=n/2-1;i>=0;i--){
        Heapify(a,i);
    }
    for(int i=n-1;i>0;i--){
        swap(a[i],a[0]);
        Heapify(a,0);
    }
}

int main(){
    int n;
    cin>>n;
    vi a(n);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    heapsort(a);
    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<endl;
}