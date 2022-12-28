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

        if(a==b+c){
            cout<<"Yes\n";
        }else if(b==a+c){
            cout<<"Yes\n";
        }else if(c==a+b){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }


    }

return 0;
}