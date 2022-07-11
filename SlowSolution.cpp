#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        long long maxT,maxN,sumN;
        cin>>maxT>>maxN>>sumN;
        long long x=sumN/maxN;
        if(maxT<=x){
            long long ans=maxT*(pow(maxN,2));
            cout<<ans<<endl;
        }else{
            long long ans=(x*pow(maxN,2))+pow((sumN-(x*maxN)),2);
            cout<<ans<<endl;
        }

    }

return 0;
}