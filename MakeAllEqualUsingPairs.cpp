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
        vector<int> a;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            a.emplace_back(x);
        }
        sort(a.begin(),a.end());
        int count=1;int maxi=1;
        for(int i=1;i<n;i++){
            if(a[i-1]!=a[i]){
                count=1;
            }else{
                count++;
            }
            maxi=max(maxi,count);
        }cout<<(n-maxi)<<endl;


    }




    return 0;
}