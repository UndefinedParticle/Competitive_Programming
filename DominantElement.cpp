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
        int n;cin>>n;
        map<int,int> a;
        loop(i,0,n){
            int x;cin>>x;
            a[x]++;
        }

        int d=0;
        for(auto it:a){
            d=max(d,it.second);
        }
        int cnt=0;
        int num;
        for(auto it:a){
            if(d==it.second){
                //num=it.first;
                cnt++;

            }
        }
        if(cnt==1){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No\n";
        }
        




    }

return 0;
}