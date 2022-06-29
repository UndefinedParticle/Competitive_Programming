#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> b;
        int sum=0;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            sum=sum+x;
            b.emplace_back(x);
        }
        
        if(sum%2==0)
            cout<<"Yes\n";
        else
            cout<<"No\n";
        


    }




    return 0;
}