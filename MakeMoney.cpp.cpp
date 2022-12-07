#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,n) for(int i=a;i<n;i++)

void code_init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

}






int main(){
    code_init();

    //Number of test cases
    int t;cin>>t;
    while(t--){
        
        int n,x,c;cin>>n>>x>>c;
        vector<int> a(n);
        loop(i,0,n){
            cin>>a[i];
        }
        ll ans=0,cnt=0;
        loop(i,0,n){
            if(x-c > a[i]){
                ans+=x;
                cnt++;
            }else{
                ans+=a[i];
            }
        }
        cout<<ans-(cnt*c)<<endl;




        

    }

return 0;
}