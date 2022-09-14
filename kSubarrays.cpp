#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,n) for(int i=a;i<n;i++)

int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);   
}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll t;cin>>t;
    while(t--){
        ll n,k;cin>>n>>k;
        ll g=0;
        vector<ll> a;
        loop(i,0,n){
            ll x;cin>>x;
            g=gcd(g,x);
            a.emplace_back(x);
        }

        ll newG=0;
        ll cnt=0;

        loop(i,0,n){
            newG=gcd(newG,a[i]);
            if(newG==g){
                cnt++;
                newG=0;
            }

        }

        (cnt>=k)? cout<<"Yes\n":cout<<"No\n";




    }

return 0;
}