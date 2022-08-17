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
        ll n,x;cin>>n>>x;
        ll cnt=0;
        bool flag=false;
        if(n==1){
            cout<<"1\n";
        }else if(n<=x){
            cout<<"0\n";
        }else{
            cout<<n-x<<endl;
        }

        


    }

return 0;
}