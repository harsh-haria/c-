#include<iostream>
using namespace std;
//this is not a ideal method. Instead what we can do is, rather than having a seperate matrix for storing transpose, we can just swap the elements of the matrix. apart from that we should avoid swapping of elements having i==j which will help us in reducing time it requires to run.

int main()
{
    int n;
    cin>>n;
    int a[n][n];
    int b[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }//taking input for the array
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            b[i][j] = a[j][i];
        }
    }//transpose
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<< b[i][j]<<" ";
        }
        cout<<endl;
    }


}