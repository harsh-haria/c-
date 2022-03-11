#include<iostream>
using namespace std;

int main(){
    int line;
    int x,y,z;

    cout<<"Enter the number of lines in rhombus: ";
    cin>>line;
    
    for(x=1;x<=line;x++){ //for lines

        for(int j=line-x;j>=1;j--){
            cout<<"  ";
        }//for spaces
        //cout<<"x";
        
        if(x==1||x==line){
            for(int i=1;i<=line;i++){
                cout<<"* ";
            }//for top and bottom line
        }
        else{
            for(int i=1;i<=line;i++){
                (i==1||i==line)?cout<<"* ":cout<<"  ";
            }//for middle lines
        }
        

        cout<<endl;
    }

}