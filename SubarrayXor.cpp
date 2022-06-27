#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<int> a;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            a.emplace_back(x);
        }
        int length=INT_MAX;
        int xor1=0;
        int prev;
        unordered_map<int,int> mp;
        vector<pair<int,int>> vt1;
        for(int i=0;i<n;i++){
            xor1=xor1^a[i];
            prev=xor1;
            if(xor1>=k){
                length=min(length,i+1);
                
            }/*else{
                vt1.emplace_back(make_pair(xor1,i));
            }*/
            if(a[i]>=k){
                length=min(length,1);
            }
            int h=xor1^prev;
            if(mp.find(h)!=mp.end()){
                length=min(length,i-mp[h]+1);
            }
            mp[xor1]=i;
        }
        if(length==INT_MAX)
            cout<<"-1"<<endl;
        else
            cout<<length<<endl;

    }




    return 0;
}