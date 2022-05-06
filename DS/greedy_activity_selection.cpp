#include<bits/stdc++.h>
using namespace std;

#define vii vector<int> 
#define vvi vector<vector<int>>
#define first ff
#define second ss
#define rep(i,a,b) for(int i=a;i<b;i++)

int main(){
    int n;cin>>n;
    vvi v;
    for(int i=0;i<n;i++){
        int start, end;
        cin>>start>>end;
        v.push_back({start,end});
    }
    sort(v.begin(),v.end(),[&](vector<int> &a, vector<int> &b){
        return a[1] < b[1];
    });
    // for(auto i:v){
    //     cout<<i[0]<<" "<<i[1]<<endl;
    // }
    int take = 1;
    int end = v[0][1];
    // cout<<end<<endl;
    for(int i=1;i<n;i++){
        if(v[i][0]>=end){
            take++;
            end = v[i][1];
            // cout<<end<<endl;
        }
    }
    cout<<take<<endl;
}