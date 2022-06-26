#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int t;cin>>t;
    while(t--){
        int n,x;cin>>n>>x;
        vector<int> a;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            a.emplace_back(x);
        }
        
        int flag=1;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                if(a[i]+a[i+1] <=x)
                    swap(a[i],a[i+1]);
                else{
                    flag=0;
                    break;
                }
            }
        }

        (flag==1)? cout<<"Yes\n":cout<<"No\n";


    }




    return 0;
}