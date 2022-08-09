#include<bits/stdc++.h>
using namespace std;

void print(vector<int> nums){
    for(auto i:nums){
        cout<<i<<" ";
    }
    cout<<endl;
}

int getMax(vector<int> nums){
    int maxi = INT_MIN;
    for(auto i:nums){
        maxi = max(maxi,i);
    }
    return maxi;
}

void countSort(vector<int> &nums, int n, int exp){
    vector<int> output(n);
    int count[10] = {0};

    for(int i=0; i<n; i++){
        count[ (nums[i]/exp) % 10 ]++;
    }//count the digits

    for(int i=1; i<10; i++){
        count[i] += count[i-1];
    }//make count continouous

    for(int i=n-1; i>=0; i--){
        output[ count[(nums[i]/exp)%10] - 1 ] = nums[i];
        count[(nums[i]/exp)%10]--;
    }

    for(int i=0; i<n; i++){
        nums[i] = output[i];
    } 
}

void radixSort(vector<int> &nums, int n){
    int m = getMax(nums);
    for(int exp = 1; m/exp>0; exp*=10){
        countSort(nums,n,exp);
    }
}

int main(){
    vector<int> nums;
    int n;
    cout<<"Enter the number of elements to be sorted: ";
    cin>>n;
    cout<<"Enter the numbers: ";
    for(int j=0; j<n; j++){
        int i; 
        cin>>i; 
        nums.push_back(i);    
    }
    radixSort(nums,n);
    print(nums);
}