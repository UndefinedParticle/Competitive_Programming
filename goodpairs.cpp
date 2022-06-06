#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
#endif
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=1;i<=n;i++)
            cin>>a[i];
        for(int i=1;i<=n;i++)
            cin>>b[i];
        int count=0;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                if((i<j) & (a[i]==b[j]) & (a[j]==b[i])){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }

    return 0;
}