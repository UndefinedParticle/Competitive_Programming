#include<bits/stdc++.h>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int x,y;
        if(n%5==0)
            x=(n/5)-1;
        else
            x=n/5;
        if(k%5==0)
            y=(k/5)-1;
        else
            y=k/5;
        cout<<x-y<<endl;

    }




    return 0;
}