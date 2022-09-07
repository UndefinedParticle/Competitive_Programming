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
            a.emplace_back(x);
        }
        loop(i,0,n){
            if(a[i]==a[(i+1)%n]){
                if(a[i]==1)
                    countOne++;
                else
                    countZero++;
            }
        }
        if((min(countOne,countZero))&1)
            cout<<"Alice\n";
        else
            cout<<"Bob\n";
      


        


    }

return 0;
}