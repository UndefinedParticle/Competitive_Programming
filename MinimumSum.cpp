#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define loop(i,a,n) for(ll i=a;i<n;i++)

ll gcd(ll a, ll b){
    return b == 0 ? a : gcd(b, a % b);   
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll cnt=0;
        ll ans=0;
        loop(i,0,n){
            ll x;cin>>x;
            
            if(x==0)
                cnt++;
            ans=gcd(ans,x);
            cout<<"gcd: "<<ans<<endl;
        }
        
        cout<<ans*(n-cnt)<<endl;
        


    }

return 0;
}