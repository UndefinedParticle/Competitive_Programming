#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define loop(i,a,n) for(int i=a;i<n;i++)


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> s;
        loop(i,0,n){
            int x;cin>>x;
            s.emplace_back(x);
        }
        string v;cin>>v;

        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            if(v[i]=='0'){
                if(s[i]<mini){
                    mini=s[i];
                }
            }
        }
        cout<<mini<<endl;
       


    }

return 0;
}