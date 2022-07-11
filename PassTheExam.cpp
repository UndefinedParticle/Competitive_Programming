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
        ((a+b+c)>=100 && a>=10 && b>=10 && c>=10)? cout<<"Pass\n":cout<<"Fail\n";
    }

return 0;
}