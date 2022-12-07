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


bool isBoring(string s){
    loop(i,0,s.size()-1){
        if(s[i]!=s[i+1]){
            return false;
        }
    }
    return true;
}



int main(){
    code_init();

    //Number of test cases
    int t;cin>>t;
    while(t--){
        
        ll n;cin>>n;
        string s;cin>>s;
        map<pair<char,ll>,ll> mp;
        char str=s[0];
        ll len=1;
        mp[{str,len}]++;

        loop(i,1,n){
            if(str != s[i]){
                str=s[i];
                len=1;
            }else{
                len++;
            }

            mp[{str,len}]++;
        }
        ll maxi=0;
        for(auto it:mp){
            if(it.second==1){
                ll l=(int)it.first.second;
                maxi=max(maxi,it.first.second-1);
                continue;
            }
            maxi=max(maxi,it.first.second);
        }
        cout<<maxi<<endl;



        

    }

return 0;
}