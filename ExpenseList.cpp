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
        
        int n,x;cin>>n>>x;
        ll expense=pow(2,x);
        expense=expense/2;
        loop(i,2,n+1){
            expense=expense/2;
        }
        cout<<expense<<endl;

    }

return 0;
}