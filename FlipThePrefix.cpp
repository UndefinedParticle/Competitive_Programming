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
        
        int n,k;cin>>n>>k;
        string s;cin>>s;

        int cnt=0;
        vector<int> ans(n,0);
        
        loop(i,1,n){

            if(s[i] != s[i-1]){
                cnt++;
            }
            
            ans[i]=cnt;
        }

        
        int res=INT_MAX;
        for(int i=n-1;i>=0;i--){

            if(i-(k-1) <0){
                break;
            }

            int chk=ans[i]-ans[i-(k-1)];
            if(s[i]=='0'){
                chk++;
            }

            res=min(res,chk);
        }
        

        cout<<res<<endl;
    }

return 0;
}