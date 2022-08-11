#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define loop(i,a,n) for(int i=a;i<n;i++)

bool isPowerofTwo(ll n){

    return (n != 0) && ((n & (n - 1)) == 0);
}

ll split(ll n,ll cnt){
    if(isPowerofTwo(n-1)){
        return cnt;
    }else{
        cnt++;
        return split(n-1,cnt);
    }
}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        
        if(isPowerofTwo(n)){
            cout<<"0\n";
        }else{
            cout<<__builtin_popcount(n)-1<<endl;
        }
        




    }

return 0;
}