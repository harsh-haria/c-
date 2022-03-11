#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    int ele;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int num[n];
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
    
    cout<<endl;
    int pos=0;
    int temp;
    int count=0;
    for(int i=0;i<n-1;i++){
        count++;
        int base=INT_MAX;
        for(int j=i;j<n;j++){
            if(num[j]<base){
                base=num[j];
                pos=j;
            }
        }
        temp=num[i];
        num[i]=num[pos];
        num[pos]=temp;
    }

    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
    // cout<<endl<<count;

}