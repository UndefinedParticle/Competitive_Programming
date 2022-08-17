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
        int n,m;cin>>n>>m;
        string a;cin>>a;
        string b="";
        loop(i,0,m){
            b +=a;
        }
        int countZero=0,countOne=0;
        int pos=0;
        loop(i,0,n){
            if(a[i]=='0')
                countZero++;
            else{
                pos=i;
                countOne++;
            }
        }

        if(countZero==n){
            cout<<n*m<<endl;
        }else if(countOne==n){
            ((m*n)%2 == 0)? cout<<"1\n":cout<<"0\n";
        }else{
            int cnt1=0;
            int one=((countOne*m +1)/2);
            int ans=0;
            bool flag=false;
            int j=0;
            loop(i,0,m*n){
                if(b[i]=='1'){
                    cnt1++;
                }
                if(cnt1==one && flag==false){
                    flag=true;
                    ans=1;
                    j=i;
                }
                if(i>j && j!= 0){
                    if(b[i]=='0'){
                        ans++;
                    }else{
                        break;
                    }
                }
            }
            cout<<ans<<endl;
        }



    }

return 0;
}