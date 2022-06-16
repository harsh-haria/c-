#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool comp(vector<pair<int,int>> &a,vector<pair<int,int>> &b){
    return a[0].second
}

int main(){
    vector<pair<int,int>> nums;
    nums.push_back({5,2});
    nums.push_back({1,6});
    nums.push_back({7,7});
    nums.push_back({2,8});
    nums.push_back({6,1});
    nums.push_back({8,2});
    // cout<<nums[0].first<<endl;
    for(auto i:nums){
        cout<<i.first<<","<<i.second<<"    ";
    }
    sort(nums.begin(),nums.end(),comp );
    cout<<endl;
    for(auto i:nums){
        cout<<i.first<<","<<i.second<<"    ";
    }
}