#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
#endif

    int t;cin>>t;
    while(t--){
        int a,b,m;
        cin>>a>>b>>m;
        int temp1=abs(b-a);
        int temp2;
        if(a==1)
            temp2=abs(abs(m-b)+a);
        else
            temp2=abs(abs(m-b)+a)+1;
        int ans=min(temp1,temp2);
        cout<<ans<<endl;
    }

    return 0;
}