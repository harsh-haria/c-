//print elements of the 2 dimentional array in spiral order
//refer 9.1 for explaination
#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }//taking input for the array

    int r_start = 0;
    int r_end = n-1;
    int c_start = 0;
    int c_end = m-1;

    while(r_start<=r_end || c_start<=c_end)
    {

        if(r_start<=r_end || c_start<=c_end){for(int i=c_start;i<=c_end;i++) cout<<a[r_start][i]<<" ";}
        if(r_start<=r_end || c_start<=c_end){for(int i=r_start+1;i<r_end;i++) cout<<a[i][c_end]<<" ";}
        if(r_start<=r_end || c_start<=c_end){for(int i=c_end;i>=c_start;i--) cout<<a[r_end][i]<<" ";}
        if(r_start<=r_end || c_start<=c_end){for(int i=r_end-1;i>r_start;i--) cout<<a[i][c_start]<<" ";}
        
        r_start++;
        r_end--;
        c_end--;
        c_start++;
        //cout<<endl;
    }

}