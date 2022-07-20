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

        int count=0;
        int maxCount=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                count=0;
            }else{
                count++;
                maxCount=max(maxCount,count);
            }
        }

        (maxCount>=4)? cout<<"No\n":cout<<"Yes\n";



    }

return 0;
}