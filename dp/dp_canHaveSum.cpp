//given a group of numbers and a sumNumber determine if you can add numbers in the group and create sumNumber
//note: numbers can be used any number of times
//note: All numbers are non negative
#include<bits/stdc++.h>
using namespace std;
vector<pair<int,bool>> dp;
bool canSum(int x, vector<int> num){
    for(auto i:dp){
        if(i.first == x){
            return i.second;
        }
    }
    if(x==0){
        return true;
    }
    if(x<0){
        return false;
    }
    for(auto i:num){
        int temp = x-i;
        if(canSum(temp,num)){
            dp.push_back({x,true});
            return true;
        }
    }
    dp.push_back({x,false});
    return false;
}

int main(){
    int x;cin>>x;
    int size;cin>>size;
    vector<int> nums;
    for(int i=0;i<size;i++){
        int y;cin>>y;
        nums.push_back(y);
    }
    cout<<canSum(x,nums);
}