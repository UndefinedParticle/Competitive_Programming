#include<bits/stdc++.h>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif



    int t;cin>>t;
    while(t--){  
        double n,x;cin>>n>>x;
        double num=n/6;
        cout<<ceil(num)*x<<endl;
    }
    return 0;
}