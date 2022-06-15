#include<bits/stdc++.h>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int t;cin>>t;
    while(t--){
        int n,x;cin>>n>>x;
        string s="abcdefghijklmnopqrstuvwxyz";
        int h;
        if(n%2==0)
            h=n/2;
        else
            h=(n/2)+1;
        string ans="";
        if(x>h || x>26){
            cout<<"-1\n";
        }else{
            for(int i=0;i<h;i++){
                ans=ans+s[i%x];
            }
            cout<<ans;
            if(n!=1){
                if(n%2==0)
                    for(int j=ans.size()-1;j>=0;j--)
                        cout<<ans[j];
                else
                    for(int j=ans.size()-2;j>=0;j--)
                        cout<<ans[j];
            }
            cout<<endl;
        }


    }




    return 0;
}