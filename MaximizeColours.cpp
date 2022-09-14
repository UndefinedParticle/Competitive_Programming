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
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        int maxi=0;
        loop(i,0,3){
            if(a[i]!=0){
                a[i]--;
                maxi++;
            }
        }
        sort(a,a+3);
        int ans=maxi;
        if(a[0]==0){
            if(a[1]>=1){
                ans=maxi+1;
            }else{
                ans=maxi;
            }
        }else if(a[0]==1){
            if(a[2]>=2){
                ans=maxi+2;
            }else{
                ans=maxi+1;
            }
        }else if(a[0]>=2){
            ans=maxi+3;
        }




        cout<<ans<<endl;

    }

return 0;
}