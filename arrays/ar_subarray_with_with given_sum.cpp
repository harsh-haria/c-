#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }//for the input
    int sum_to_find;
    cin>>sum_to_find;

    int i=0,j=0,st = -1, en = -1, sum=0;
    while(j<n && sum_to_find >= sum+a[j])
    {
        sum+=a[j];
        j++;
    }
    if(sum==sum_to_find)
    {
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }
    while(j<n)
    {
        sum+=a[j];
        while(sum>sum_to_find)
        {
            sum-=a[i];
            i++;
        }
        if(sum==sum_to_find)
        {
            st = i+1;
            en = j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en;
    return 0;
}