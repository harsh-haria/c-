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

    //clear function
    string str7 = "a string which needs to be removed from the variable :)";
    cout<<str7<<endl;   // the string will get printed normally
    str7.clear();       // the string will be cleared/removed
    cout<<str7<<endl;   // nothing will be printed

    //compare function
    string str8 = "abc";
    string str9 = "xyz";
    string str10 = "xyz";
    cout<< str8.compare(str9)<<endl;    //will return a negative value
    cout<< str9.compare(str8)<<endl;    //will return a positive number bcz x is alphabetically bigger than a
    cout<< str10.compare(str9)<<endl;   //will return 0 bcz both are same
    if(!str10.compare(str9)){
        cout<<"String are equal"<<endl;
    }

    //empty function
    string str11 = "abc";
    cout << str11 << endl;
    str11.clear();
    if(str11.empty())
        cout<<"str11 is empty"<<endl;

    //erase can be used to erase some part of the string. even from between the characters
    string str12 = "Nincompoop";
    str12.erase(3,3); //str12.erase(<starting_character> , <no_of_characters>);
    cout<<str12<<endl;
    str12.erase(0,3);
    cout<<str12<<endl;
}