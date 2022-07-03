#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        long long n,m,k;cin>>n>>m>>k;
        /*vector<int> a;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            a.emplace_back(x);
        }*/
        //int mini=*min_elment(a.begin(),a.end());
        //int maxi=*max_elment(a.begin(),a.end());
        unordered_map<long long,long long> mp;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            if(mp.find(x)!=mp.end()){
                mp[x]++;
            }else{
                mp[x]=1;
            }
        }


        if(m==1){
            cout<<"No\n";
        }else if(mp.find(k)==mp.end() && m<=n){
            cout<<"Yes\n";
        }else{
            int b=1;
            for(int i=0;i<=n;i++){
                if(mp[i]==0 && i<k){
                    cout<<"No\n";
                    b=0;
                    break;
                }
            }
            if(b==1){
                if(mp[k]<=(n-m) ){
                    cout<<"Yes\n";
                }else{
                    cout<<"No\n";
                }
            }
        }





    }

return 0;
}