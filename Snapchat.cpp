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

        vector<int> a(n);
        loop(i,0,n){
            cin>>a[i];
        }

        vector<int> b(n);
        loop(i,0,n){
            cin>>b[i];
        }

        int cnt=0;
        int maxi=cnt;

        loop(i,0,n){
            if(a[i]==0 || b[i]==0){
                cnt=0;
            }else{
                cnt++;
            }

            maxi=max(maxi,cnt);
        }

        cout<<maxi<<endl;


    }

return 0;
}