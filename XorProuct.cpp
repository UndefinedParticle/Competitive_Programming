#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,n) for(ll i=a;i<n;i++)

void code_init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

}


bool isBoring(string s){
    loop(i,0,s.size()-1){
        if(s[i]!=s[i+1]){
            return false;
        }
    }
    return true;
}



int main(){
    code_init();

    //Number of test cases
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        int mini=INT_MAX;
        loop(i,0,n){
            cin>>a[i];
            if(mini>a[i]){
                mini=a[i];
            }
        }
        int ans=0,tmp=0;

        loop(i,0,n){
            if(a[i] != mini){
                if(a[i]%mini ==0){
                    ans++;
                }else{
                    tmp=1;
                    break;
                }
            }
        }
        if(tmp){
            cout<<n<<endl;
        }else{
            cout<<ans<<endl;
        }

    }

return 0;
}