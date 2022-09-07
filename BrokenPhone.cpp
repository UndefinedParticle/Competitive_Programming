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
        int x,y;cin>>x>>y;
        if(x<y) cout<<"Repair\n";
        else if(x>y) cout<<"New Phone\n";
        else cout<<"Any\n";





    }

return 0;
}