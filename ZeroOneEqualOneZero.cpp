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
        string s="01";
        string ans="";
        if(n%2==0){
            ans=ans+'1';
            for(int i=1;i<n-1;i++)
                ans=ans+'0';
            ans=ans+'1';
        }else{
            int x=(n/2)+1;
            for(int i=1;i<=n;i++){
                if(i==x)
                    ans=ans+'1';
                else
                    ans=ans+'0';
            }
        }
        cout<<ans<<endl;

    }




    return 0;
}