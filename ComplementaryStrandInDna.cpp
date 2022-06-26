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
        string ans="";
        for(int i=0;i<n;i++){

            switch(s[i]){
                case 'A':
                    ans=ans+'T';
                    break;
                case 'T':
                    ans=ans+'A';
                    break;
                case 'C':
                    ans+='G';
                    break;
                case 'G':
                    ans+='C';
                    break;
            }
        }
        cout<<ans<<endl;


    }




    return 0;
}