#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        ll n,k;cin>>n>>k;
        string s;cin>>s;
        ll countZero=0;
        ll countOne=0;
        for(ll i=0;i<n;i++){
            if(s[i]=='1'){
                countOne++;
            }else{
                countZero++;
            }
        }
        ll badness=abs(countZero-countOne);
        ll maxi=max(countZero,countOne);
        
        if(badness%k){
            cout<<(badness/k)+1<<endl;
        }else{
            cout<<(badness/k)<<endl;
        }
                
            


    }

return 0;
}