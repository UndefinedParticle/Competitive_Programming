#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        int n,k,m;cin>>n>>k>>m;
        
        int maxCandies=k*m;

        if(maxCandies>=n){A
            cout<<"1\n";
        }else{
            if(n%maxCandies==0){
                cout<<(n/maxCandies)<<endl;
            }else{
                cout<<(n/maxCandies)+1<<endl;
            }
        }
        



    }

return 0;
}