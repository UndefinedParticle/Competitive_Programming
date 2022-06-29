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
        vector<long long> b(n,0);
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>b[i];
            sum += b[i];
        }
        long long sumA=(int)(sum)/(n+1);
       
        
        for(int i=0;i<n;i++){
            cout<<b[i]-sumA<<" ";
        }
        cout<<endl;

    }

return 0;
}