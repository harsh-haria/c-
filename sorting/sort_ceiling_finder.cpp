#include<bits/stdc++.h>
using namespace std;
//incomplete



int ceilSearch(int arr[],int low,int high,int x){
    int mid = 0;
    mid = low + (high-low) / 2;
    if(arr[mid]==x){
        return arr[mid];
    }
    else if(arr[mid+1]<=high and x){

    }

}

int main()
{
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 20;
    int index = ceilSearch(arr, 0, n-1, x);
    if(index == -1)
        cout << "Ceiling of " << x
             << " doesn't exist in array ";
    else
        cout << "ceiling of " << x
             << " is " << arr[index];
     
    return 0;
}