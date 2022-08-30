/*
Given an array which contains integer values, we need to make all values of this array equal to some integer value with minimum cost where the cost of changing an array value x to y is abs(x-y). 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,100,101};
    int y;
    int n = arr.size();
    int s = 0;
    if (n % 2 == 1){
        y = arr[n / 2];
    }
    else{
        y = (arr[n / 2] + arr[(n - 2) / 2]) / 2;
    }
    for(int i = 0; i < n; i++){
        s += abs(arr[i] - y);
    }
    cout<<s<<endl;
    return 0;
}