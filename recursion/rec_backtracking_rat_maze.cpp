//find a way for the rat to go through the maze.
//use backtracking.
//input V
/*
    1 0 1 0 1
    1 1 1 1 1
    0 1 0 1 0
    1 0 0 1 1
    1 1 1 0 1
*/
#include<iostream>
using namespace std;

bool isSafe(int **arr, int x, int y, int n){
    if(x<n && y<n && arr[x][y]==1){
        return true;
    }
    return false;
}

bool ratinmaze(int **arr, int x, int y, int n, int **solArr){

    if(x==n-1 && y==n-1){
        solArr[x][y]=1;
        return true;
    }

    if(isSafe(arr,x,y,n)){
        solArr[x][y]=1;
        if(ratinmaze(arr,x+1,y,n,solArr)){
            return true;
        }
        if(ratinmaze(arr,x,y+1,n,solArr)){
            return true;
        }
        solArr[x][y]=0;
        return false;
    }
    return false;
}

int main(){

    int n; cin>>n;
    
    //dynamic allocation of maze 
    int **arr = new int*[n]; 
    for(int i=0;i<n;i++){
        arr[i] = new int [n];
    }

    //input for the maze
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    //dynamic allocation of solution array
    int **solArr = new int*[n]; 
    for(int i=0;i<n;i++){
        solArr[i] = new int [n];
        for(int j=0;j<n;j++){
            solArr[i][j]=0;
        }
    }

    //calling the function
    if(ratinmaze(arr,0,0,n,solArr)){
        cout<<endl<<"Solution: "<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<solArr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

}