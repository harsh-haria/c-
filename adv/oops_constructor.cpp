#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;



    student(){
        cout<<"Default constructor "<<endl;
        //this will print automatically when we write student <object_name>; in the main function
        //this is called default constructor
        //valid only till any other constructor is created.
    }

    student(string s, int a, int g){ 
        //this is called parameterised constructor
        //if we make this then default constructor will not work by default.
        //in that case we will have to create a separate default constructor
        name = s;
        age = a;
        gender = g;
    }

    student(student &address){
        //when we create a copy constructor on our own, this works as deep copy.
        //if we use the default copy provided then it will perform shallow copy i.e. values will be copied not pointers
        cout<<"Default copy constructor "<<endl;
        name = address.name;
        age = address.age;
        gender = address.gender;
    }

    void printinfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Gender: "<<gender<<endl;
    }

    ~student(){ //it will be called when we the object is destroyed, probably when the function exists
        cout<<"Object destroyed :)"<<endl;
    }

    bool operator == (student &a){
        if((name == a.name) && (age = a.age) && (gender = a.gender)){
            return true;
        }
        return false;
    }

};

int main(){

    student a;
    cout<<endl;
    student b("Harsh",22,0);
    student e("Takli",25,1);
    b.printinfo();
    cout<<endl;
    student c(b); //copy constructor
    cout<<endl<<24<<endl;
    student d = e; //copy constructor
    student x(e);
    c.printinfo();
    cout<<endl;
    d.printinfo();
    b.printinfo();
    
    if(a==e){
        cout<<"Same :))))"<<endl;
    }
    else{
        cout<<"Not same :(((((((("<<endl;
    }
}