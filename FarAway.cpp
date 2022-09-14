#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,n) for(int i=a;i<n;i++)




int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll t;cin>>t;
    while(t--){
        ll n,m;cin>>n>>m;
        vector<ll> a(n,0);
        ll maxi=0;
        loop(i,0,n){
            cin>>a[i];
            ll l=abs(1-a[i]);
            ll r=abs(m-a[i]);
            if(l<r){
                maxi+=r;
            }else{
                maxi+=l;
            }
        }
        cout<<maxi<<endl;




    }

return 0;
}