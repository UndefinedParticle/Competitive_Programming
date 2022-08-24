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
        ll n;cin>>n;
        if(n&1){
            ll odd=(n/2)+1;
            ll even=n-odd;
            ll ans=(2*odd*even);
            cout<<ans<<endl;
        }else{
            ll ans=2*(n/2)*(n/2);
            cout<<ans<<endl;
        }
        


    }

return 0;
}