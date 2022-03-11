#include<iostream>
using namespace std;
//here the elemets are in sorted order
//from left to right and top to bottom
//start from first row last column, if key found then return, else if element is less than key move down else move left. 
int main()
{
    int n,m;
    cin>>n>>m;
    int key;
    cin>>key;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    int c_end = m-1;
    int r_end = n-1;
    int r_start = 0;
    int c_start = 0;
    while(r_end>n-1 || c_end!=-1)
    {
        if(a[r_start][c_end]==key)
        {
            cout<<endl<<"Element found";
            return 0;
        }
        if(a[r_start][c_end]>key)
        {
            cout<<a[r_start][c_end]<<" ";
            c_end--;
        }
        if(a[r_start][c_end]<key)
        {
            cout<<a[r_start][c_end]<<" ";
            r_start++;
        }
    }
    cout<<"Element not found!";
    return 0;
}