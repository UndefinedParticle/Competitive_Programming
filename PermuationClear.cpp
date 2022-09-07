#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,n) for(int i=a;i<n;i++)

bool comp(pair<int,int> &a,pair<int,int> &b){
    return a.second<=b.second;
}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll t;cin>>t;
    while(t--){
        int n;cin>>n;
        unordered_map<int,int> a;
        loop(i,0,n){
            int x;cin>>x;
            a[x]=i;
        }
        int k;cin>>k;
        unordered_map<int,int> b;
        loop(i,0,k){
            int x;cin>>x;
            b[x]=i;
        }
        for(auto it:b){
            a.erase(it.first);
        }
        vector<pair<int,int>> A;
        for(auto it:a){
            A.push_back(it);
        }
        sort(A.begin(),A.end(),comp);
        for(auto it:A){
            cout<<it.first<<" ";
        }cout<<endl;




    }

return 0;
}