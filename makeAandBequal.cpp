#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define loop(i,a,n) for(ll i=a;i<n;i++)


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll> a,b;
        ll sumA=0,sumB=0;
        ll maxiA=INT_MIN,maxiB=INT_MIN;
        loop(i,0,n){
            ll x;cin>>x;
            sumA+=x;
            if(x>maxiA)
                maxiA=x;
            a.emplace_back(x);
        }
        loop(i,0,n){
            ll x;cin>>x;
            sumB+=x;
            if(x>maxiB)
                maxiB=x;
            b.emplace_back(x);
        }

        if(sumA != sumB){
            cout<<"-1\n";
        }else{

            ll diff=0;
            loop(i,0,n){
                diff += abs(a[i]-b[i]);
            }
            cout<<diff/2<<endl;


        }


        


    }

return 0;
}