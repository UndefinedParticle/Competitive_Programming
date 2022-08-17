#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define loop(i,a,n) for(int i=a;i<n;i++)


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        int a,b,c;cin>>a>>b>>c;
        int maxi=max(a,c);
        (maxi<=b)? cout<<"Yes\n":cout<<"No\n";
       


    }

return 0;
}