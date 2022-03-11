#include<iostream>
#include<climits>
using namespace std;
//finding a subarray having maximum sum
//method using cumulative sum
//incomplete

int main()
{
    int n;
    cin>>n;

    int a[n];
    int sum[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }//getting values for the array

    int mainSum=0;
    sum[0]=0;
    int maxSum = INT_MIN;
    for(int i=1;i<=n;i++)
    {
        mainSum+=a[i-1];
        sum[i]=mainSum;
    }

    for(int i=0;i<=n;i++){
        cout<<sum[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<n;i++)
    {

    }

}