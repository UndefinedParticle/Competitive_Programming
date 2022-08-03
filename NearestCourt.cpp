#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        int x,y;cin>>x>>y;
        int diff=abs(x-y);
        int ans=ceil((double)(diff/2.0));
        cout<<ans<<endl;
        



    }

return 0;
}