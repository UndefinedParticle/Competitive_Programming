#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Number of test cases => ";
    int t;cin>>t;
    while(t--){  
        float x,y;
        cin>>x>>y;
        if(y <= ((x*107)/100))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}