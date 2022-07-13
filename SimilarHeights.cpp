#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    long long t;cin>>t;
    while(t--){
        long long n;cin>>n;
        unordered_map<long long,long long> h;
        long long maxi=0;
        for(long long i=0;i<n;i++){
            long long x;cin>>x;
            maxi=max(maxi,x);
            h[x]++;
        }
        long long count=0;
        vector<long long> temp1;
        vector<long long> temp2;
        for(auto it:h){
            if(it.second==1){
                temp1.push_back(it.first);
                count++;
            }
            else
                temp2.push_back(it.second);

        }
        long long cnt=count/2;
        long long ans=1;
        if(count==1){
            if(maxi == temp1[0]){
                long long highest=*max_element(temp2.begin(),temp2.end());
                if(highest<=2){
                    ans=highest;
                }
            }
            cout<<ans<<endl;
        }else if(count%2==0)
            cout<<cnt<<endl;
        else
            cout<<cnt+1<<endl;





    }

return 0;
}