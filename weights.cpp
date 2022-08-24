#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define loop(i,a,n) for(ll i=a;i<n;i++)


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        int w,x,y,z;
        cin>>w>>x>>y>>z;

        if(x+y==w || x+z==w || y+z==w || x+y+z==w || x==w||y==w||z==w){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
        


    }

return 0;
}