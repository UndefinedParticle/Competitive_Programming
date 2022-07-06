#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        int x,y;cin>>x>>y;
        (x>=y)? cout<<"0\n":cout<<abs(y-x)<<endl;

    }

return 0;
}