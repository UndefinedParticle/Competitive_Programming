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
        int x=s.size();
        string ans="";
        for(int i=0;i<x-1;i=i+2){
            if(s[i]=='0' && s[i+1]=='0')
                ans=ans+'A';
            else if(s[i]=='0' && s[i+1]=='1')
                ans=ans+'T';
            else if(s[i]=='1' && s[i+1]=='0')
                ans=ans+'C';
            else if(s[i]=='1' && s[i+1]=='1')
                ans=ans+'G';
        }
        cout<<ans<<endl;

    }




    return 0;
}