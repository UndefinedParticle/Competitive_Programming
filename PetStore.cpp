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
        
        int n;cin>>n;

        unordered_map<int,int> mp(n);
        loop(i,0,n){
            int x;cin>>x;
            mp[x]++;
        }

        int flag=1;

        for(auto it:mp){
            if(it.second %2 != 0){
                flag=0;
                cout<<"No\n";
                break;
            }
        }

        if(flag){
            cout<<"Yes\n";
        }




    }

return 0;
}