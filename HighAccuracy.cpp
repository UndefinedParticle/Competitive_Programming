#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        int x;cin>>x;
        if(x%3==0)
            cout<<"0\n";
        else if((x+2)%3==0)
            cout<<"2\n";
        else
            cout<<"1\n";


    }

return 0;
}