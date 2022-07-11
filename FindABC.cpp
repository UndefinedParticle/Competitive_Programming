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
        vector<long long> f;
        
        for(int i=0;i<=n;i++){
            long long x;cin>>x;
            f.emplace_back(x);
        }
        long long diff=f[1]-f[0];
        long long a,b,c;
        switch(diff){
            case 3:
                a=0,b=0,c=f[0];
                break;
            case -3:
                a=1,b=1,c=f[0]-2;
                break;
            case -1:
                a=0,b=3,c=f[0]-3;
                break;
            case 1:
                a=0,b=0,c=f[0];
                break;
        }

        cout<<a<<" "<<b<<" "<<c<<endl;




    }

return 0;
}