#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int t;cin>>t;
    while(t--){
        long long n,m;cin>>n>>m;
        long long a[n][m];
        
        if(n<=m){
            int d=0;
            for(long long i=0;i<n;i++){
                d=1+i;
                if(i==0)
                    a[0][0]=1;
                else
                    a[i][0]=a[i-1][0]+(n+1);
                
            for(long long j=1;j<m;j++)
                a[i][j]=a[i][j-1]+d;
            }
        }else{
            int d=0;
            for(long long i=0;i<n;i++){
                d=m+i+1;
                if(i==0)
                    a[0][0]=1;
                else
                    a[i][0]=a[i-1][0]+(1);
                
            for(long long j=1;j<m;j++)
                a[i][j]=a[i][j-1]+d;
            }
        }
        


        for(long long i=0;i<n;i++){
            for(long long j=0;j<m;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }

    }




    return 0;
}