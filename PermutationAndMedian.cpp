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
        vector<int> p(n,0);
        p[0]=n;
        int k=n;
        if(n>1){
            //p.emplace_back(1);
            int c=1;
            for(int i=1;i<n;i++){
                if(i%2 != 0){
                    p[i]=c;
                    c++;
                }else{
                    k--;
                    p[i]=k;
                }

            }
        }
        for(auto it:p){
            cout<<it<<" ";
        }cout<<endl;


    }

return 0;
}