#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,n) for(int i=a;i<n;i++)

bool comp(pair<int,int> &a,pair<int,int> &b){
    return a.second<=b.second;
}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll t;cin>>t;
    while(t--){
        int x,y;cin>>x>>y;
        int right=3*x-y;
        int b=y;
        int a,c;

        for(int i=b+1;i<1000;i++){
            if((right-i)<b){
                a=right-i;
                c=i;
                break;
            }
        }
        cout<<a<<" "<<b<<" "<<c<<endl;

        




    }

return 0;
}