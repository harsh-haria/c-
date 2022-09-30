// given a group of numbers and a sumNumber return the numbers with which we can generate targetSum and if we cannot return null
// note: numbers can be used any number of times
// note: All numbers are non negative
#include <bits/stdc++.h>
using namespace std;

void howSum(int target, vector<int> nums, vector<int> tempAns,
    vector<vector<int>> &ans, vector<pair<int,bool>> &map){
    if(target == 0){
        map.push_back({target,true});
        if(ans.empty()){
            ans.push_back(tempAns);
        }
        else{
            if(ans[0].size()>tempAns.size()){
                ans.pop_back();
                ans.push_back(tempAns);
            }
        }
        return;
    }
    if (target < 0){
        map.push_back({target,false});
        // return false;
        return;
    }

    for(auto i:map){
        if(i.first == target){
            if(i.second==false){
                // return false;
                return;
            }
        }
    }

    for(auto i:nums){
        tempAns.push_back(i);
        howSum(target-i, nums,tempAns, ans, map);
        tempAns.pop_back();
    }
}

int main()
{
    int targetSum;
    cin >> targetSum;
    int size;
    cin >> size;
    vector<int> numbers;
    for (int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        numbers.push_back(temp);
    }
    // input till here
    vector<vector<int>> ans;
    vector<int> tempAns;
    vector<pair<int,bool>> map;
    howSum(targetSum, numbers, tempAns, ans, map);
    if(ans.size()<1){
        cout<<"NULL"<<endl;
        return 0;
    }
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}