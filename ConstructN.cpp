#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        long long n;cin>>n;

        long long r1=n%7;
        long long m1=n%2;
        
        if(n%2==0 || n%7==0 || (r1%2)==0 || (m1%7)==0)
            cout<<"Yes\n";
        else if((n-7)%2==0 && n>7)
            cout<<"Yes\n";
        else
            cout<<"No\n";




    }

return 0;
}