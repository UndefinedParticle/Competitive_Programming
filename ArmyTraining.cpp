#include<bits/stdc++.h>
using namespace std;
//#define int long long
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        vector<long long> a;
        vector<long long> d;
        long long aSum=0;
        long long dSum=0;
        int flag=1;
        for(int i=0;i<n;i++){
            long long x;cin>>x;

            if(find(a.begin(),a.end(),x) != a.end()){
                if(flag==1){
                    a.emplace_back(x);
                    aSum +=x;
                    flag=2;
                }else{
                    d.emplace_back(1000-x);
                    dSum +=(1000-x);
                    flag=1;
                }

            }else if(x>=(1000-x)){
                a.emplace_back(x);
                aSum +=x;
                flag=2;
            }else{
                d.emplace_back(1000-x);
                dSum +=(1000-x);
                flag=1;
            }
        }
        if(d.empty()){
            dSum=1;
        }
        if(a.empty()){
            aSum=1;
        }
        cout<<aSum*dSum<<endl;


    }

return 0;
}