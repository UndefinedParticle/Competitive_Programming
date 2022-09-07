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
        ll n,k;cin>>n>>k;
        ll sum=k*(k+1)/2;
        (sum<=n)? cout<<"Yes\n":cout<<"No\n";

        




    }

return 0;
}