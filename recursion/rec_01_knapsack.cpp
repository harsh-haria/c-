//put n items with given weight and value in a knapsack of capacity W to get the minimum total value in knapsack
#include<iostream>
using namespace std;

int knapsack(int value[], int wt[], int n, int W){
    
    if(n==0 || W==0){
        return 0;
    }
    if(wt[n-1]>W){
        return knapsack(value,wt,n,W);
    }
    // cout<<n<<" "<<W<<endl;
    return max(knapsack(value,wt,n-1,W-wt[n-1])+value[n-1] , knapsack(value,wt,n-1,W));
}

int main(){
    int wt[] = {10,20,30};
    int value[] = {100,50,150};
    int n = 3; 
    int W = 50;
    cout<<knapsack(value,wt,n,W)<<endl;
}