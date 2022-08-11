#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        ll x,y;cin>>x>>y;
        ll a=(x>>1);
        ll b=(x>>1);
        if(x&1){
            b++;
        }
        bool ans=false;
        for(ll i=1;i*i<=y;i++){
            if(y%i !=0){
                continue;
            }
            ll j=y/i;
            if(min(i,j)>b || max(i,j)<a){
                cout<<a<<" "<<b<<endl;
                cout<<min(i,j)<<" "<<max(i,j)<<endl;
                ans=true;
                break;
            }
        }
        if(ans==false){
            cout<<"-1\n";
        }




    }

return 0;
}