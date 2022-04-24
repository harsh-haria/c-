#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void bucket(float arr[],int n, float ans[]){
    vector<float> b[n];
    for(int i=0;i<n;i++){
        int x = n*arr[i];
        b[x].push_back(arr[i]);
    }
    for(int i=0;i<n;i++){
        sort(b[i].begin(),b[i].end());
    }
    int index = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<b[i].size();j++){
            ans[index] = b[i][j];
            index++;
        }
    }
}

int main(){
    int n=10;
    float arr[] = {0.15,0.85, 0.54, 0.44, 0.91, 0.66, 0.69, 0.01, 0.32, 0.99};
    float ans[n];
    bucket(arr,n,ans);
    for(auto i:ans){
        cout<<i<<" ";
    }cout<<endl;
}