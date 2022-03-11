#include<iostream>
using namespace std;

void min_max(int n1,int n2,int n3){
    int max,min;
    (n1>n2)?((n1>n3)?max=n1:max=n3):((n2>n3)?max=n2:max=n3);
    (n1>n2)?((n2<n3)?min=n2:min=n3):((n1<n3)?min=n1:min=n3);
    cout<<"Min "<<min<<endl;
    cout<<"Max "<<max<<endl;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    min_max(a,b,c);
    return 0;
}