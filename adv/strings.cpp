#include<iostream>
#include<string>

using namespace std;

int main(){

    string str;
    str = " HELLO WORLD ";
    cout<<str+"\n"+"this is a new line"<<endl; //concatenation in cout statemnet
    string str1(1,'\n');    //will print \n 1 time. if it was str1(5, 'S') then  SSSSS will be printed
    cout<<str1<<endl;
    cout<<"done"<<endl;
    string str2;
    getline(cin, str2);     //This is how we take a input for string with spaces in it.
    cout<<str2<<endl;       //other way is to use cin.getline(<array_name>, <size>) works for char array
    string str4 = "fam";
    string str5 = "ily";
    string str6 = str4 + str5 ;     //we can use basic concatenation of two strings, store it, display it
    cout<<str4+str5<<endl;          //this one and the one after this do the same job but are done in different way
    cout<<str6<<endl;               //same as above
    
    str4.append(str5);      //another way to combine string. this is permanenet
    cout<<str4<<endl;
    cout<<str4[3]<<endl;     //just like arrays we can print one single character from the array

    return 0;

}