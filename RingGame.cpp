#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define loop(i,a,n) for(int i=a;i<n;i++)


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a,b;
        int countZero=0,countOne=0;
        loop(i,0,n){
            int x;cin>>x;
            if(x==0)
                countZero++;
            else
                countOne++;
            a.emplace_back(x);
        }
        int adj=0;
        if(a[0]==a[n-1]) adj++;
        loop(i,1,n){
            if(a[i]==a[i-1])
                adj++;
        }

        int ans=adj-abs(countZero-countOne);
        if(ans%2==0)
            cout<<"Bob\n";
        else
            cout<<"Alice\n";
      


        


    }

return 0;
}