#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        long long even=0;
        long long odd=0;
        vector<long long> vt(2*n);
        vector<long long> evt;
        for(long long i=0;i<2*n;i++){
            cin>>vt[i];
            if(vt[i]%2 ==0 ){
                even++;
                evt.emplace_back(vt[i]);
            }else{
                odd++;
            }
        }
        if(even==odd){
            cout<<"0"<<endl;
        }else if(odd>even){
            long long diff=(odd-even)/2;
            cout<<diff<<endl;
        }else{
            long long ans=0;
            long long diff=(even-odd)/2;
            long long tv=0;
            while(diff){
                long long count=0;
                for(long long i=0;i<even;i++){
                    if(evt[i]!=0){
                        evt[i]=evt[i]/2;
                        if(evt[i]%2==1){
                            count++;
                            evt[i]=0;
                        }
                    }
                }
                tv++;
                if(diff>count){
                    ans=ans+(count*tv);
                    diff=diff-count;
                }else{
                    ans=ans+ (diff*tv);
                }

            }
            cout<<ans<<endl;
        }

    }

return 0;
}