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
        
        int a,c;cin>>a>>c;

        int flag=0;
        loop(i,0,c){
            if(c== a+ 2*i){
                cout<<a+i<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<-1<<endl;

    }

return 0;
}