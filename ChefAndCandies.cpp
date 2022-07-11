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
        if(n>x){
            int rest=n-x;
            if(rest%4==0){
                cout<<rest/4<<endl;
            }else{
                cout<<1+(rest/4)<<endl;
            }
        }else{
            cout<<"0"<<endl;
        }
    }

return 0;
}