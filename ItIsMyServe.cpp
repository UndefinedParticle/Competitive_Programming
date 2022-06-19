#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int t;cin>>t;
    while(t--){
        int p,q;cin>>p>>q;
        if(p==0 && q==0)
            cout<<"Alice"<<endl;
        else if(((p+q)/2)%2==0)
            cout<<"Alice"<<endl;
        else
            cout<<"Bob"<<endl;

    }




    return 0;
}