#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        unordered_map<int,int> a;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            a[x]++;
        }

        int maxi=1;
        for(auto it:a){
            maxi=max(maxi,it.second);
        }
        int cnt=0;
        for(auto it:a){
            if(maxi==it.second)
                cnt++;
            if(cnt>1)
                break;
        }
        if(cnt>1){
            cout<<maxi<<endl;
        }else{
            int ans=(maxi+1)/2;
            //maxi=ans;
            for(auto it:a){
                if(maxi != it.second)
                    ans=max(ans,it.second);
            }
            cout<<ans<<endl;
        }

        
            


    }

return 0;
}