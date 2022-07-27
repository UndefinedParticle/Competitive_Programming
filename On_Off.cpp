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
        string s;cin>>s;
        string r;cin>>r;

        int change=0;
        for(int i=0;i<n;i++){
            if(s[i] != r[i]){
                change++;
            }
        }

        if(change&1){
            cout<<"0\n";
        }else{
            cout<<"1\n";
        }

        
        



    }

return 0;
}