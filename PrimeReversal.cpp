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
        
        int n;cin>>n;
        string a,b;cin>>a>>b;
        if(a==b){
            cout<<"Yes\n";
        }else{
            int cA=0,cB=0;

        loop(i,0,n){
            if(a[i]=='0'){
                cA++;
            }
            if(b[i]=='0'){
                cB++;
            }
        }

        (cA==cB)? cout<<"Yes\n":cout<<"No\n";


        }
        }

return 0;
}