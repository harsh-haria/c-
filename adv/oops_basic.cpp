#include<iostream>
using namespace std;

class student{
    string classy;
    //string name; 
    //if we would have declared it over here then 
    //we wont be able to access this member outside the class
    public: // this is necessary as we know that the data members are private by deafult.
    //anything above public would be private
    string name;
    int age;
    bool gender;

    void printInfo(){
        cout<<endl;
        // cout<<"Class: "<<classy<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Gender: "<<gender<<endl;
    }

    void setname(string s){
        classy = s;
    }

    void getname(){
        cout<<classy<<endl;
    }
};

int main(){
    int n=3;
    student arr[n]={};
    for(int i=0;i<n;i++){
        string s;
        cin>>s>>arr[i].name>>arr[i].age>>arr[i].gender;
        arr[i].setname(s);
    }

    for(auto i:arr){
        i.printInfo();
        i.getname();
    }
}