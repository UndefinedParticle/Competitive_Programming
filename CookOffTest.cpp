#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        int n,m,k;cin>>n>>m>>k;
        vector<int> a,b;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            if(x!=k)
                a.emplace_back(x);
            if(x>k)
                b.emplace_back(x);
        }

        if((a.size()==m || b.size()>=m) || b.size()>=m)
            cout<<"Yes\n";
        else
            cout<<"No\n";



    }

return 0;
}