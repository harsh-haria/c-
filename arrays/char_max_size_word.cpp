//find the word with max size
//print the word and the size of the word.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char words[n+1];
    cin.getline(words,n);
    cin.ignore();
    int i=0;
    int maxlength = 0;
    int curlength = 0;
    int st=0, maxst = 0;
    while(1)
    {
        if(words[i]==' '|| words[i]=='\0')
        {
            if(curlength>maxlength)
            {
                maxlength = curlength;
                maxst = st;
            }
            cout<<curlength<<endl;
            curlength=0;
            st = i+1;
        }
        else
        {
            curlength++;
        }
        if(words[i]=='\0') break;
        i++;
    }
    cout<<"max:"<<maxlength<<endl;
    for(int i=0;i<maxlength;i++)
    {
        cout<<words[i+maxst];
    }
    return 0;
}