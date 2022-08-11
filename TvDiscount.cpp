#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define loop(i,a,n) for(int i=a;i<n;i++)


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if((a-c)<(b-d))
             cout<<"First\n";
         else if((a-c)>(b-d))
            cout<<"Second\n";
        else
            cout<<"Any\n";
        




    }

return 0;
}