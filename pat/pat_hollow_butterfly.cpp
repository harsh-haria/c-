#include<iostream>
using namespace std;

int main(){
    int size;
    int x,y,z;
    
    cout<<"Enter the size of the butterfly: ";
    cin>>size;

    for(x=1;x<=size;x++){
        cout<<"*";//for first line of stars
        
        for(int i=1;i<=x;i++){
            if(i<3){
                continue;
            }
            cout<<" ";
        }//for first spaces

        (x==1)?cout<<"":cout<<"*"; //adds 2nd line of stars

        int line = 2*size;
        
        for(int i=1;i<=line-2*x;i++){
            cout<<" ";
        }//adds 2nd space 

        cout<<"*";//add 3rd stars

        for(int i=1;i<=x;i++){
            if(i<3){
                continue;
            }
            cout<<" ";
        }//add 3rd space
        
        (x==1)?cout<<"":cout<<"*";//add 4th line of star
        cout<<endl;
    }

    for(x=size;x>=1;x--){
        cout<<"*";//for first line of stars
        
        for(int i=x;i>=1;i--){
            if(i<3){
                continue;
            }
            cout<<" ";
        }//for first spaces

        (x==1)?cout<<"":cout<<"*"; //adds 2nd line of stars

        int line = 2*size;
        
        for(int i=line-2*x;i>=1;i--){
            cout<<" ";
        }//adds 2nd space 

        cout<<"*";//add 3rd stars

        for(int i=x;i>=1;i--){
            if(i<3){
                continue;
            }
            cout<<" ";
        }//add 3rd space
        
        (x==1)?cout<<"":cout<<"*";//add 4th line of star
        cout<<endl;
    }

}