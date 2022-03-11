#include<iostream>
using namespace std;

int main(){
    int size,line;
    int i,j,k,l;
    int a,b,c,d;

    cout<<"Enter the size of the star: ";
    cin>>size;
    
    for(i=1;i<=size*2+1;i++){
        cout<<"*";
    }
    cout<<endl;
    for(line=1;line<=size;line++){
        
        for(i=(size+1)-line;i>=1;i--){
            cout<<"*";
        }

        for(j=1;j<=line*2-1;j++){
            cout<<" ";
        }

        for(k=(size+1)-line;k>=1;k--){
            cout<<"*";
        }
        cout<<endl;
    }

    for(line=size;line>=1;line--){
        
        for(i=1;i<=(size+1)-line;i++){
            cout<<"*";
        }

        for(j=line*2-1;j>=1;j--){
            cout<<" ";
        }

        for(k=1;k<=((size+1)-line);k++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(i=1;i<=size*2+1;i++){
        cout<<"*";
    }
    cout<<endl;

}