#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,n) for(int i=a;i<n;i++)
void solve(){
    int n;cin>>n;

        int p[n];
        int one_Pos,n_Pos;
        loop(i,0,n){
            int x;cin>>x;
            if(x==1) one_Pos=i;
            if(x==n) n_Pos=i;
            p[i]=x;
        }

        if(one_Pos>n_Pos){
            cout<<(one_Pos+(n-1-n_Pos-1))<<endl;
        }else{
            cout<<one_Pos+(n-1-n_Pos)<<endl;
        }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        solve();





    }

return 0;
}