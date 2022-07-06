#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        int x,y;cin>>x>>y;
        int z=x^y;
        int a=2^x;
        int b=2^y;
        int c=2^z;
        vector<int> vt={2};
        if(a&1)
            vt.emplace_back(a);
        if(b&1)
            vt.emplace_back(b);
        if(c&1)
            vt.emplace_back(c);

        sort(vt.begin(),vt.end());
        for(auto it:vt)
            cout<<it<<" ";
        cout<<endl;
    }

return 0;
}