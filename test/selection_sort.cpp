#include<iostream>
using namespace std;

int main(){
    int n = 10;
    int a[] = {0,5,4,8,9,6,3,7,1,2};
    for(auto i:a){
        cout<<i<<" ";
    }cout<<endl;
    int i=0;
    for(int i=0;i<n;i++){
        int j=i;
        int mini = j;
        while(j<n){
            if(a[mini]>a[j]){
                mini = j;
            }
            j++;
        }
        swap(a[i],a[mini]);
    }
    for(auto i:a){
        cout<<i<<" ";
    }cout<<endl;
}