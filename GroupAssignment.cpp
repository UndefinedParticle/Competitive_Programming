#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        unordered_map<long long,long long> p;
        for(long long i=0;i<n;i++){
            long long x;cin>>x;
            if(p.find(x)!=p.end()){
                p[x]++;
            }else{
                p[x]=1;
            }
        }

        bool ans=true;
        for(auto it:p){
            if(it.second%it.first !=0){
                ans=false;
                break;
            }
        }
        (ans==true)? cout<<"Yes\n":cout<<"No\n";
        /*if(ans==true)
            cout<<"Yes\n";
        else
            cout<<"No\n";*/

    }

return 0;
}