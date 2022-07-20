#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        int n,k,x,y;cin>>n>>k>>x>>y;

        int redPrice=k*x;
        int restBulb=n-k;

        int minPrice=min(x,y);

        int otherPrice=minPrice*restBulb;

        cout<<otherPrice+redPrice<<endl;

        
        



    }

return 0;
}