#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,n) for(int i=a;i<n;i++)

void code_init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

}



int main(){
    code_init();

    //Number of test cases
    int t;cin>>t;
    while(t--){
        
        int n,k;cin>>n>>k;
        vector<int> a(n);
        loop(i,0,n){
            cin>>a[i];
        }
        vector<int> b(n);
        loop(i,0,n){
            cin>>b[i];
        }

        map<int,int> mp;

        loop(i,0,n){
            if(mp.find(a[i]) != mp.end()){
                mp[a[i]]=min(mp[a[i]],b[i]);
            }else{
                mp[a[i]]=b[i];
            }
        }

        int flag=1;
        if(mp.size()<k){
            cout<<-1<<endl;
        }else{

            ll ans=0;
            int cnt=1;

            multiset<int> ml;


            for(auto it:mp){
                ml.insert(it.second);
                    
            }

            for(auto it:ml){
                if(cnt<=k){
                    ans+=it;
                    cnt++;
                }else{
                    break;
                }
            }


            cout<<ans<<endl;


        }



    }

return 0;
}