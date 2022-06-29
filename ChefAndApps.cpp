#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int t;cin>>t;
    while(t--){
        int s,x,y,z;
        cin>>s>>x>>y>>z;
        int r=s-(x+y);
        int a=abs(r-z);
        if(z<=r)
            cout<<"0\n";
        else if(a<=x || a<=y)
            cout<<"1\n";
        else
            cout<<"2\n";


    }




    return 0;
}