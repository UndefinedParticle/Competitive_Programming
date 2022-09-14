#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,n) for(int i=a;i<n;i++)




int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll t;cin>>t;
    while(t--){
        int x;cin>>x;
        int l=x-1;
        int r=100-x;
        (l<r)? cout<<"Left\n":cout<<"Right\n";



    }

return 0;
}