#include<iostream>
using namespace std;
 int main()
 {
     int a,b,c;
     cout << "Enter the numbers \n";
     cin>>a>>b>>c;
     if(a>b)
     {
         if(a>c)
         {
             cout<<"The largest of all is A"<<endl;
         }
         else
         {
            cout<<"The largest of all is C"<<endl;
         }
     }
     else
     {
         if(b>c)
         {
            cout<<"The largest of all is B"<<endl;
         }
         else
         {
             cout<<"The largest of all is C"<<endl;
         }
     }

     return 0;
 }