#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,n) for(int i=a;i<n;i++)

/*bool comp(pair<int,int> &a,pair<int,int> &b){
    return a.second<=b.second;
}*/
int countSetBits(int n){
    if (n == 0)
        return 0;
    else
        return 1 + countSetBits(n & (n - 1));
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll t;cin>>t;
    while(t--){
        int p,q,r;cin>>p>>q>>r;
        int cntP=__builtin_popcount(p);
        int cntQ=__builtin_popcount(q);
        int cntR=__builtin_popcount(r);
        int sum=cntR+cntQ+cntP;
        int ans=abs(sum-3);
        cout<<ans<<endl;




    }

return 0;
}