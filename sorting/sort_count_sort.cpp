#include<bits/stdc++.h>
using namespace std;
//20.1
//time complexity is O(max(Ai,N)); where Ai is the max element and N is number of elements in the array

void countSort(int n, int arr[], int ans[]){
    
    int maxInt = INT_MIN;
    for(int i=0;i<n;i++){   //getting the max value from the array of the numbers
        maxInt = max(maxInt,arr[i]);
    }

    int countArr[maxInt+1] = {0};//once we have the max element we will create a array with size of maxelement
    for(int i=0; i<n;i++){  //getting the count of each number in the given array
        countArr[arr[i]]++;
    }

    int position[maxInt+1] = {0}; //creation of position array
    for(int i=1;i<=maxInt;i++){ //position array is the array which will tell us what place to store a element in new array
        position[i] = position[i-1] + countArr[i];
    }

    for(int i=n-1;i>=0;i--){ //from the end of given array start traversing.
    /*
    now for example we get 3 in last position of given array
    then we go to index 3 in position array and decrement it
    the number we get after we decrement is the index where we will store 3 in new array i.e. ans[]
    */
        ans[--position[arr[i]]] = arr[i];
    }
}

int main(){
    int n = 9;
    int arr[n] = {1,3,2,3,4,1,6,4,3};
    int ans[n] = {0}; 
    countSort(n,arr,ans);
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}