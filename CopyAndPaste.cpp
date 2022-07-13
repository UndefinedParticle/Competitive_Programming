#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    long long t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;

        if(n==1)
            cout<<"Yes\n";
        else{
            string ans="";

            int p=1;
            while(ans.size()<n){
                if(p==1){
                    ans += s[ans.size()];
                    p=0;
                }else{
                    ans += ans;
                    p=1;
                }
            }
            if(ans==s)
                cout<<"Yes\n";
            else
                cout<<"No\n";


        }





    }

return 0;
}