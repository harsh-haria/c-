#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define ff first
#define ss second



int main(){
    int n;cin>>n;
    vii a(n);
    rep(i,0,n){
        cin>>a[i].ff>>a[i].ss;
    }
    
    sort(a.begin(),a.end(),[&](pair<int,int> &a, pair<int,int> &b){
        double x = (double) a.ff/a.ss;
        double y = (double) b.ff/b.ss;
        return x>y;
    });
    // for(auto i:a){//printer
    //     cout<<i.ff<<" "<<i.ss<<endl;
    // }
    int capacity;cin>>capacity;
    int final_value = 0;
    int i=0;
    while(capacity>0){
        if(capacity-a[i].ss >= 0){
            final_value +=a[i].ff;
            capacity -= a[i].ss;
            i++;   
            continue;
        }else{
            break;
        }
    }
    double tobeinserted = (double) a[i].ff/a[i].ss;
    tobeinserted*=capacity;
    final_value+=tobeinserted;
    cout<<final_value<<endl;
}