#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        int a,b,c;cin>>a>>b>>c;
        int max1=max(a,b);
        int maxi=max(max1,c);
        if(maxi==a)
            cout<<"Aloce\n";
        else if(maxi==b)
            cout<<"Bob\n";
        else
            cout<<"Charlie\n";
    }

return 0;
}