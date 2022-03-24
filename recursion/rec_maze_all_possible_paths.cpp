//given size of a maze, find all possible paths from start to end
#include<iostream>
using namespace std;

int maze(int n, int i,int j){
    if(i==n-1 && j==n-1){
        return 1;
    }
    if(i>=n || j>=n){
        return 0;
    }
    return maze(n,i+1,j) + maze(n,i,j+1);

}

int main(){
    int n;
    cin>>n;
    cout<<maze(n,0,0);
    return 0;
}