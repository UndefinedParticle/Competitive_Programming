#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,n) for(ll i=a;i<n;i++)

void code_init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

}

vector<ll> helper(ll n,ll k,ll s){
    vector<ll> ans;
    loop(i,0,n){
        ll b=(s%k +k)%k;

        if(b !=0 && b!=1 && b!= -1){
            return {-2};
        }

        ans.emplace_back(b);
        s=(s-b)/k;
    }

    return ans;
}


int main(){
    code_init();

    //Number of test cases
    int t;cin>>t;
    while(t--){
        
        ll n,k,s;cin>>n>>k>>s;

        vector<ll> ans=helper(n,k,s);
        if(ans[0]==-2){
            cout<<-2<<endl;
        }else{
            loop(i,0,ans.size()){
                cout<<ans[i]<<((i < ans.size()-1)? " ":"");
            }
        }
        cout<<endl;


    }

return 0;
}