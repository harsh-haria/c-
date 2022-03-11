#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }//input for array

    int new_size = 1e6+2;
    int idx[new_size];
    for(int i=0;i<new_size;i++){
        idx[i] = -1;
    }
    int minidx = INT_MAX;
    for(int i=0;i<n;i++){
        if(idx[a[i]]!=-1){
            minidx = min(minidx,idx[a[i]]);
        }
        else{
        idx[a[i]] = i;
        }
    }
    minidx==INT_MAX?cout<<"-1":cout<<minidx+1;
}