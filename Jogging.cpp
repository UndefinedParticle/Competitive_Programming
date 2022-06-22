#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int t;cin>>t;
    vector<long long> v;
    v.emplace_back(1);
    for(long long i=0;i<1000010;i++){
        int x=v[v.size()-1]*2;
        x=x%1000000007;
        v.emplace_back(x);
    }
    
    while(t--){
        long long n,x;cin>>n>>x;
        long long ans=(v[n-1]*x)%1000000007;
        cout<<ans<<endl;
    }




    return 0;
}