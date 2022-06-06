#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;
    while(t--){

        int x,y,z;
        cin>>x>>y>>z;
        int price=(x*5)+(y*10);
        int ans=price/z;
        cout<<ans<<endl;
    }



    return 0;
}