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
        multiset<int> mp;
        loop(i,1,n+1){
            int x;cin>>x;

            mp.insert(x);
        }

        int i=0,ans=0;
        int flag=0;
        
        for(auto it:mp){
            i++;
            if(it != i && it<i){
                ans+=(i-it);
            }else if(it>i){
                cout<<-1<<endl;
                flag=1;
                break;
            }
            

        }

        if(flag==0){
            cout<<ans<<endl;
        }





    }

return 0;
}