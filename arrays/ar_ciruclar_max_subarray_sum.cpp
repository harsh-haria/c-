//Maximum Circular Subarray Sum
//it will use kadens if it is not wrapping
//if it is wrapping then we will keep one thing in mind
//max subarray sum = total sum of array - sum of non contributing elements
//these non contributing elements will not wrap around. only the contributing elements will wrap around
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int non[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }//for input array

    for(int i=0;i<n;i++)
    {
        non[i] = a[i] - 2*a[i];
    }//reversing the elements in the array and storing it in new array

    for(int i=0;i<n;i++)
    {
        cout<<non[i]<<" ";
    }

    //now appliying the kadens algo on the newly created algo for getting sum of non contributing elements
    //max subarray sum = total sum of array - sum of non contributing elements

    int newa[n];
    int tempSum=0;
    for(int i=0;i<n;i++)//kadens
    {
        tempSum+=non[i];
        if(tempSum<0)
        {
            tempSum=0;
            newa[i]=0;
        }
        else
        {
            newa[i] = tempSum;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<newa[i]<<" ";
    }


    int maxsum = INT_MIN;
    for(int i=0;i<n;i++)
    {
        maxsum = max(newa[i],maxsum);
    }
    maxsum = maxsum - 2*maxsum;
    cout<<endl<<maxsum;
    int supersum = 0;
    for(int i=0;i<n;i++)
    {
        supersum+=a[i];
    }
    cout<<endl<<supersum;
    cout<<endl<<"Max Subarray sum is "<<supersum - maxsum;
}