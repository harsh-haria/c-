#include<iostream>
using namespace std;

int main(){
    int size=0;
    int i,j,k;
    int a,b,c;
    cout<<"Enter the size of the star with stars: ";
    cin>>size;

    for(i=1;i<=size;i++){ //main loop for changing the lines
        
        for(j=size-i;j>=1;j--){
            cout<<" ";
        }
        cout<<"*";
        for(k=1;k<=2*i-3;k++){
            cout<<" ";
        }
        (i==1)?cout<<"":cout<<"*";
        cout<<endl;
    }

    for(a=size;a>=1;a--){

        for(b=1;b<=size-a;b++){
            cout<<" ";
        }
        cout<<"*";
        for(c=2*a-3;c>=1;c--){
            cout<<" ";
        }
        (a==1)?cout<<"":cout<<"*";
        cout<<endl;
    }
}