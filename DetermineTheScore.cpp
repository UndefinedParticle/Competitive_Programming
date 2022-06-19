#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int t;cin>>t;
    while(t--){
        int x,n;cin>>x>>n;
        int pt=x/10;
        cout<<pt*n<<endl;
    }




    return 0;
}