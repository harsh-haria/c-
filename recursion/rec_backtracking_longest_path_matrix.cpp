//calculate longest possible path in the matrix using recursion and backtracking
#include<bits/stdc++.h>
using namespace std;
#define R 3
#define C 10

bool isSafe(int n){
    if(n==1){
        return 1;
    }
    return 0;
}

void pathDistance(vector<vector<int>> mat, int s, int e, int d1, int d2, vector<int> ans, int count){
    cout<<s<<" "<<e<<endl;
    vector<vector<int>> m = mat;
    if(s==d1 and e==d2){
        cout<<"pushing count"<<endl;
        ans.push_back(count);
        return;
    }
    // if(m[s][e]==-1){
    //     return;
    // }
    // m[s][e] = -1;
    if(s+1<R and isSafe(m[s+1][e])){
        pathDistance(m,s+1,e,d1,d2,ans,count+1);
    }
    if(e-1>=0 and isSafe(m[s][e-1])){
        pathDistance(m,s,e-1,d1,d2,ans,count+1);
    }
    if(e+1<C and isSafe(m[s][e+1])){
        pathDistance(m,s,e+1,d1,d2,ans,count+1);
    }
    if(s-1>0 and isSafe(m[s-1][e])){
        pathDistance(m,s-1,e,d1,d2,ans,count+1);
    }
}

void findLongestPath(vector<vector<int>> mat, int s,int e, int d1, int d2){
    vector<int> ans;
    int maxi = 0;
    cout<<"MAXI: "<<maxi<<endl;
    pathDistance(mat,0,0,1,7,ans,0);
    for(auto i:ans){
        maxi = max(maxi,i);
    }
    cout<<"Max: "<<maxi<<endl;
}

int main()
{
    // input matrix with hurdles shown with number 0
    vector<vector<int>> mat = { { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
                      { 1, 1, 0, 1, 1, 0, 1, 1, 0, 1 },
                      { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 } };
 
    // find longest path with source (0, 0) and
    // destination (1, 7)
    findLongestPath(mat, 0, 0, 1, 7);
 
    return 0;
}