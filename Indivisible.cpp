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
        
        int a,b,c;cin>>a>>b>>c;

        int ans=0;
        //int mini=min(a,min(b,c));

        loop(i,1,100){
            if(a%i!=0 && b%i!=0 && c%i!=0){
                ans=i;
                break;
            }
        }

        cout<<ans<<endl;


    }

return 0;
}