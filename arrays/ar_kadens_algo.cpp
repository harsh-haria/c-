#include<iostream>
using namespace std;

//finding a subarray having maximum sum
//method using cumulative sum
//incomplete

int main()
{
    int n;
    cin>>n;

    int a[n];
    int sum[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int tempsum=0;
    
    for(int i=0;i<n;i++)
    {
        tempsum+=a[i];
        if(tempsum<0)
        {
            sum[i]=0;
            tempsum = 0;
        }
        else
        {
            sum[i]=tempsum;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<sum[i]<<" ";
    }

    int last_min = INT_MIN;
    for(int i=0;i<n;i++)
    {
        last_min = max(last_min,sum[i]);
    }
    cout<<endl<<last_min;
}