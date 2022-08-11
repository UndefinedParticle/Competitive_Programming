#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define loop(i,a,n) for(ll i=a;i<n;i++)

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        ll n,x,y;cin>>n>>x>>y;
        vector<ll> a;
        loop(i,0,n){
            ll x;cin>>x;
            a.emplace_back(x);
        }
      
        if(y>=x){
            ll maxi=*max_element(a.begin(),a.end());
            ll ans=(maxi+y-1)/y;
            cout<<ans<<endl;
        }else{
            ll n=a.size();
            ll ans=0;
            for(ll i=n-1;i>=0;i--){
                a[i] -= (y*ans);
                a[i]=max(0ll,a[i]);
                ans=max(ans,ans+(a[i]+x-1)/x);
            }
            cout<<ans<<endl;
        }




    }

return 0;
}