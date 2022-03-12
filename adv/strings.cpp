#include<iostream>
#include<string>
#include<algorithm>

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

    //find can be used to find a specific substring 
    string str13 = "Nincompoop";
    cout<< str13.find("com")<<endl; //returns the starting address of the substring
    cout<< str13.find("poop")<<endl; //returns the starting address of the substring

    //insert
    str13.insert(2,"lol"); //str13.insert(<position>,<string>)
    cout<<str13<<endl;

    //length
    cout<< str13.size()<<endl; //no parameters just string_name.size()
    cout<< str13.length()<<endl; // both are same

    for(int i=0;i<str13.length();i++){
        cout<< str13[i] << " ";
    }
    cout<<endl;

    //sub string extraction
    string s1 = "nincompoop";
    string s = s1.substr(6,4);
    cout<< s <<endl;

    //int(inside a string) to int
    string s2 = "9";
    int x = stoi(s2);
    cout<<x+1<<endl;

    //from int to string
    int y = 9981;
    cout<< to_string(y)+"9981"<<endl;

    //sorting
    //add #include<algorithm>
    //characters will be sorted lexicographically
    string s3 = "sfurehflgsebrgbsdjlfgbljsdpiruhgpierdirgbsejbrglkjdrjgk";
    sort(s3.begin(),s3.end());
    cout<<s3<<endl;
} 