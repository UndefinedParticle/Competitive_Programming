#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        long long n,m;cin>>n>>m;
        if(n==1 && m==1){
            cout<<"1\n";
        }else if(n%2==0 && m%2==0 && n>1 && m>1){
            cout<<"0\n";
        }else if((n%2==0 && m%2!=0 && n>1 && m>1) || m==1){
            cout<<n<<endl;
        }else if((n%2 !=0 && m%2==0 && n>1 && m>1) || n==1){
            cout<<m<<endl;
        }else if(n%2!=0 && m%2!=0 && n>1 && m>1){
            cout<<n+m-1<<endl;
        }

    



    }

return 0;
}