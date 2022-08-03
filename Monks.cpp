#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(a) a.begin(),a.end()
#define ll long long

bool comp(ll a,ll b){
    return (a>=b);
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<ll> a;
        ll sum=0;
        loop(i,0,n){
            ll x;cin>>x;
            sum +=x;
            a.push_back(x);
        }
        sort(all(a),comp);
        int monk=0;
        ll requd=(a[0]*n)-sum;
        ll avail=0;


        
        if(requd==0){
            monk=0;
        }else{
            loop(i,1,n){
                requd -= (n-i)*(a[i-1]-a[i]);
                avail += a[i-1];
                if(avail>=requd){
                    monk=i;
                    break;
                }
            }
        }
        cout<<monk<<endl;





    }

return 0;
}