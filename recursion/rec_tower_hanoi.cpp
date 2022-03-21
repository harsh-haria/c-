//not complete

#include<iostream>
using namespace std;

void towerofHanoi(int n,char src,char dest,char helper){
    if(n==0){
        return;
    }
    towerofHanoi(n-1,src,helper,dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;

}

int main(){
    int n;
    cin>>n;

    towerofHanoi(n,'A','B','C');
}