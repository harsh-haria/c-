/*
    count the number of paths possible from start point to end point in gameboard
*/
#include<iostream>
using namespace std;

int gameboard(int s,int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count = 0;
    for(int i=1;i<=6;i++){
        count+=gameboard(s+i,e);
    }
    return count;
}

int main(){
    int s,e;
    cin>>s>>e;
    cout<<gameboard(s,e);
}