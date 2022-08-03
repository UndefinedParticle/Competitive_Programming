#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,n) for(int i=1;i<=n;i++)
#define ll long long



int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        int n,x;cin>>n>>x;
        
        if(x<n){
            cout<<"-1"<<endl;
        }else{
            if((x-n+1)<=n){
                cout<<x-n+1<<" ";
            
                loop(i,0,n){
                    if(i != (x-n+1)){
                        cout<<i<<" ";
                    }
                }cout<<endl;
            }else{
                cout<<"-1\n"<<endl;
            }
            
        }


    }

return 0;
}

