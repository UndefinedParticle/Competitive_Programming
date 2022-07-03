#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        int n,x,y;cin>>n>>x>>y;
        int ans=(x)+(2*y);
        if(ans<=n)
            cout<<"Yes\n";
        else
            cout<<"No\n";

    }

return 0;
}