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
        int xf,yf;
        if(x%10==0)
            xf=x/10;
        else
            xf=(x/10)+1;

        if(y%10==0)
            yf=y/10;
        else
            yf=(y/10)+1;

        cout<<abs(xf-yf)<<endl;

    }




    return 0;
}