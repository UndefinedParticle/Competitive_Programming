#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        int x,y,z;cin>>x>>y>>z;
        int r=x-y;
        if(x>y){
            int r=x-y;
            int temp=(r/y);
            if(r%y==0){
                cout<<(temp*z)+z<<endl;
            }else{
                cout<<((temp+1)*z)+z<<endl;
            }

        }else{
            cout<<z<<endl;
        }

    }

return 0;
}