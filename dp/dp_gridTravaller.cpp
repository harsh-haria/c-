#include<bits/stdc++.h>
using namespace std;

int gridTravaller(int row, int column, vector<vector<int>> &dp){
    if(row<1 or column<1){
        return 0;
    }
    
    if(row == 1 and column == 1){
        return 1;
    }

    if(dp[row-1][column-1]!=0){
        return dp[row-1][column-1];
    }
    if(dp[column-1][row-1]!=0){
        return dp[column-1][row-1];
    }
    int down = gridTravaller(row-1,column,dp);
    int right = gridTravaller(row,column-1,dp);
    return dp[row-1][column-1] = down+right;
    // return down+right;
}

int main(){
    int row = 18;
    int col = 18;
    vector<vector<int>> dp(row, vector<int>(col,0));
    cout<<gridTravaller(row,col,dp)<<endl;
}