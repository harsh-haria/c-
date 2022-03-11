#include<iostream>
using namespace std;
//just plain matrix muliplication
//input is a,b n,m for 2 matrices
//then their elememts of the array

int main()
{
    int a,b,n,m;
    cin>>a>>b>>n>>m;
    if(b!=n)
    {
        return 0;
    }
    int arr1[a][b];
    int arr2[n][m];
    int new_array[a][m] = {0,0,0};

    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cin>>arr1[i][j];
        }
    }//input for arr1
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr2[i][j];
        }
    }//input for arr2
    cout<<endl;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<m;j++)
        {
            for(int k=0;k<b;k++)
            {
                new_array[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<new_array[i][j]<<" ";
        }
        cout<<endl;
    }

}
