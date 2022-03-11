//google kickstart

#include<iostream>
using namespace std;

int  main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }//input for array

    int max_element=INT_MIN;
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]>max_element){
            max_element = a[i];
            if(a[i]>a[i+1]){
                cout<<a[i]<<" ";
                count++;
            }
        }
    }
    cout<<endl<<count;
    return 0;
}